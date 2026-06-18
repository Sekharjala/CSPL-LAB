%% ===== FM MODULATION / DEMODULATION =====
clear; clc; close all;

fs     = 1e6;
fc     = 100e6;
fm     = 5e3;
kf     = 50e3;        % Frequency sensitivity (Hz/V)
N      = 1024*16;
t      = (0:N-1)'/fs;

%% Message signal
m_t = cos(2*pi*fm*t);

%% FM Modulation: integrate message then modulate
phi  = 2*pi*kf * cumsum(m_t)/fs;    % Instantaneous phase
s_fm = exp(1j*(2*pi*0 + phi));       % Complex baseband FM

%% Modulation index and bandwidth
beta = kf/fm;
BT   = 2*(kf + fm);
fprintf('FM Modulation Index β = %.2f\n', beta);
fprintf('Carson Rule Bandwidth = %.1f kHz\n', BT/1e3);

%% Transmit
tx = sdrtx('Pluto');
tx.CenterFrequency = fc;
tx.BasebandSampleRate = fs;
tx.Gain = -20;
transmitRepeat(tx, s_fm);

%% Receive
rx = sdrrx('Pluto');
rx.CenterFrequency = fc;
rx.BasebandSampleRate = fs;
rx.GainSource = 'Manual';
rx.Gain = 30;
rx.SamplesPerFrame = N;
rx.OutputDataType = 'double';
[rx_iq, ~, ~] = rx();

%% FM Demodulation: Discriminator (instantaneous frequency)
rx_n = rx_iq ./ (abs(rx_iq) + eps);   % Normalize to unit circle
d_phi = angle(rx_n(2:end) .* conj(rx_n(1:end-1)));  % Phase diff
m_rec = d_phi * fs / (2*pi*kf);        % Recover message

%% Low-pass filter to remove noise
lpf = designfilt('lowpassfir','PassbandFrequency',fm*1.5,...
    'StopbandFrequency',fm*3,'SampleRate',fs);
m_rec_f = filter(lpf, m_rec);

%% Plots
figure('Name','FM Results');
subplot(2,2,1); plot(t(1:1000)*1e3, m_t(1:1000));
title('Original Message'); xlabel('Time (ms)');
subplot(2,2,2); plot(t(1:1000)*1e3, real(s_fm(1:1000)));
title('FM Baseband (I)'); xlabel('Time (ms)');
subplot(2,2,3); plot(t(1:999)*1e3, m_rec(1:999));
title('Demodulated (unfiltered)'); xlabel('Time (ms)');
subplot(2,2,4); plot(t(1:999)*1e3, m_rec_f(1:999));
title('Demodulated (LPF applied)'); xlabel('Time (ms)');

release(tx); release(rx);
