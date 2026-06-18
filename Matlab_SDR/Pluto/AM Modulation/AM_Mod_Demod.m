%% ===== AM MODULATION / DEMODULATION WITH PLUTO SDR =====
clear; clc; close all;

%% System Parameters
fs        = 1e6;          % Sample rate (1 MSps)
fc        = 100e6;        % Frequency for Tx (100 MHz)
fc1       = 100e3;        % Carrier frequency (100 kHz)
fm        = 5e3;          % Message frequency (5 kHz)
ka        = 0.8;          % Amplitude sensitivity (mod index = 0.8)
N         = 1024*16;      % Number of samples
t         = (0:N-1)'/fs;  % Time vector

%% Generate Message Signal (audio tone)
m_t = cos(2*pi*fm*t);     % Normalized message signal

%% AM Modulation (DSB-LC)
s_am = (1 + ka*m_t) .* cos(2*pi*fc1*t);

%% Normalize for PlutoSDR (max amplitude 1)
s_am_norm = s_am / max(abs(s_am)) * 0.9;

%% Convert to complex baseband (PlutoSDR uses IQ)
s_bb = hilbert(s_am_norm);      % Analytic signal = baseband

%% === TRANSMIT ===
tx = sdrtx('Pluto');
tx.CenterFrequency = fc;
tx.BasebandSampleRate = fs;
tx.Gain = -20;             % Reduce gain to avoid saturation
transmitRepeat(tx, s_bb);

%% === RECEIVE ===
rx = sdrrx('Pluto');
rx.CenterFrequency = fc;
rx.BasebandSampleRate = fs;
rx.GainSource = 'Manual';
rx.Gain = 30;
rx.SamplesPerFrame = N;
rx.OutputDataType = 'double';

[rx_iq, ~, ~] = rx();

%% === DEMODULATION: Envelope Detection ===
env = abs(rx_iq);                     % Envelope = |I + jQ|
env_dc_removed = env - mean(env);      % Remove DC (carrier)

%% Normalize recovered signal
m_rec = env_dc_removed / max(abs(env_dc_removed));
% Butterworth lowpass design parameters
fc_msg = 5e3;            % message tone (Hz) -- from your script
fc_cut = 8e3;            % cutoff frequency (Hz) -- set above fc_msg but below unwanted components
butter_order = 2;        % IIR order (try 2..8)

% Normalized cutoff (Nyquist = fs/2)
Wn = fc_cut / (fs/2);

% Design Butterworth lowpass
[b_but, a_but] = butter(butter_order, Wn, 'low');

% Apply zero-phase filtering to avoid phase distortion/delay
m_rec_lp = filtfilt(b_but, a_but, m_rec);

% Optional: renormalize for plotting or playback
m_rec_lp = m_rec_lp / max(abs(m_rec_lp));
%% === PLOTS ===
figure('Name','AM Modulation Results','NumberTitle','off');
subplot(3,2,1); plot(t(1:500)*1e3, m_t(1:500));
title('Message Signal m(t)'); xlabel('Time (ms)'); ylabel('Amplitude');

subplot(3,2,2); plot(t(1:500)*1e3, real(s_bb(1:500)));
title('AM Signal (Baseband I)'); xlabel('Time (ms)');

subplot(3,2,3); plot(t(1:500)*1e3, real(rx_iq(1:500)));
title('Received IQ Signal'); xlabel('Time (ms)');

subplot(3,2,4); plot(t(1:500)*1e3, m_rec(1:500));
title('Demodulated Signal-Envelope Detection'); xlabel('Time (ms)');


subplot(3,2,5);
NFFT = 4096;
f_ax = (-NFFT/2:NFFT/2-1)*fs/NFFT/1e3;
S_am = 20*log10(abs(fftshift(fft(s_bb,NFFT)))/NFFT);
plot(f_ax, S_am); xlim([-150 150]);
title('AM Baseband Spectrum'); xlabel('Freq (kHz)'); ylabel('Mag (dB)');

subplot(3,2,6);
plot(t(1:500)*1e3, m_rec_lp(1:500), 'b','LineWidth',1.2); hold off;
title('Demodulated Signal (LP filtered)');
xlabel('Time (ms)'); ylabel('Amplitude');
% legend('Raw envelope','Butter LP filtered');
grid on;
%Rx_sp = 20*log10(abs(fftshift(fft(rx_iq,NFFT)))/NFFT);
%plot(f_ax, Rx_sp); xlim([-50 50]);
%title('Received Spectrum'); xlabel('Freq (kHz)');

release(tx); release(rx);
