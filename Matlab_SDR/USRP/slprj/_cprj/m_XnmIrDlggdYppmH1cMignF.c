/* Include files */

#include "modelInterface.h"
#include "m_XnmIrDlggdYppmH1cMignF.h"
#include <string.h>
#include "mwmathutil.h"

/* Headers From Include Tags */

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 144,   /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "FMModemBase",                       /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/+internal/FMModemBase.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "Helper",                            /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/compiled/+comm/+internal/Helper.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 282, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 289, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 302, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 60,  /* lineNo */
  "FMModulator",                       /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMModulator.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 1,   /* lineNo */
  "SOSFilter",                         /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/compiled/+dspcodegen/SOSFilter.p"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 1,   /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/shared/system/coder/+matlab/+system/+coder/ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 60,  /* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 1,   /* lineNo */
  "SupportArbitraryInputLength",       /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/+internal/SupportArbitraryInputLength.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 1,   /* lineNo */
  "SupportScalarVarSize",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/+internal/SupportScalarVarSize.p"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 38,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 440, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 441, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 442, /* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 108, /* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 149, /* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 1,   /* lineNo */
  "FIRInterpolator",                   /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/compiled/+dspcodegen/FIRInterpolator.p"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 184,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 202,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 35, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 456,/* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 457,/* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 458,/* lineNo */
  "FMBroadcastModulator",              /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/comm/comm/+comm/FMBroadcastModulator.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 194,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 24, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/eml/eml/+coder/+internal/matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 1,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/usr/local/MATLAB/R2026a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 306, /* lineNo */
  13,                                  /* colNo */
  "SampleRateConverter",               /* fName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 149, /* lineNo */
  21,                                  /* colNo */
  "SampleRateConverter",               /* fName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pName */
};

static emlrtRSInfo jb_emlrtRSI = { 306,/* lineNo */
  "SampleRateConverter",               /* fcnName */
  "/usr/local/MATLAB/R2026a/toolbox/dsp/dsp/+dsp/SampleRateConverter.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3840], creal_T c_y0[19200]);
static void SystemCore_reset(const emlrtStack *sp, comm_FMModulator *obj);
static void b_SystemCore_reset(const emlrtStack *sp, dsp_SampleRateConverter
  *obj);
static void FMBroadcastModulator_stepImpl(InstanceStruct_XnmIrDlggdYppmH1cMignF *
  moduleInstance, const emlrtStack *sp, comm_FMBroadcastModulator *obj, real_T
  x[3840], creal_T y[19200]);
static void SystemCore_stepImpl(dsp_SOSFilter *obj, real_T varargin_1[3840],
  real_T varargout_1[3840]);
static void SOSFilter_outputImpl(dsp_SOSFilter *obj, real_T varargin_1[3840],
  real_T varargout_1[3840]);
static void SystemCore_step(const emlrtStack *sp, dsp_SampleRateConverter *obj,
  real_T varargin_1[3840], real_T varargout_1[19200]);
static void SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj);
static void SampleRateConverter_stepImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj, real_T u[3840], real_T y[19200]);
static void b_SystemCore_stepImpl(dsp_FIRInterpolator *obj, real_T varargin_1
  [3840], real_T varargout_1[19200]);
static void FIRInterpolator_outputImpl(dsp_FIRInterpolator *obj, real_T
  varargin_1[3840], real_T varargout_1[19200]);
static void b_SystemCore_step(const emlrtStack *sp, comm_FMModulator *obj,
  real_T varargin_1[19200], creal_T varargout_1[19200]);
static void FMModulator_stepImpl(comm_FMModulator *obj, real_T x[19200], creal_T
  y[19200]);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void useConstantDim(real_T varargin_2[19200], int32_T varargin_3);
static void b_exp(creal_T x[19200]);
static void init_simulink_io_address(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "communication_toolbox", 2);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "signal_blocks", 2);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "signal_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance)
{
  moduleInstance->sysobj.pFMMod.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.matlabCodegenIsDeleted
    = true;
  moduleInstance->sysobj.pAudioRateConv1.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack st;
  st.site = &ib_emlrtRSI;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
    b_st.site = &hb_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (moduleInstance->sysobj.isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &db_emlrtRSI;
        if (moduleInstance->sysobj.pPreEmphFilter.isInitialized == 1) {
          moduleInstance->sysobj.pPreEmphFilter.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
        }

        f_st.site = &eb_emlrtRSI;
        if (moduleInstance->sysobj.pFMMod.isInitialized == 1) {
          moduleInstance->sysobj.pFMMod.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (moduleInstance->sysobj.pFMMod.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            moduleInstance->sysobj.pFMMod.pCumSum = 0.0;
          }
        }

        f_st.site = &fb_emlrtRSI;
        if (moduleInstance->sysobj.pAudioRateConv1.isInitialized == 1) {
          moduleInstance->sysobj.pAudioRateConv1.isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (moduleInstance->sysobj.pAudioRateConv1.isSetupComplete) {
            h_st.site = &g_emlrtRSI;
            i_st.site = &gb_emlrtRSI;
            if (moduleInstance->sysobj.pAudioRateConv1.filt1->isInitialized == 1)
            {
              moduleInstance->sysobj.pAudioRateConv1.filt1->isInitialized = 2;
              j_st.site = &g_emlrtRSI;
              if (moduleInstance->sysobj.pAudioRateConv1.filt1->isSetupComplete)
              {
                k_st.site = &g_emlrtRSI;

                /* System object Destructor function: dsp.FIRInterpolator */
              }
            }

            moduleInstance->sysobj.pAudioRateConv1.NumChannels = -1;
          }
        }
      }
    }
  }

  st.site = &ib_emlrtRSI;
  if (!moduleInstance->sysobj.pAudioRateConv1.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.pAudioRateConv1.matlabCodegenIsDeleted = true;
    b_st.site = &hb_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (moduleInstance->sysobj.pAudioRateConv1.isInitialized == 1) {
      moduleInstance->sysobj.pAudioRateConv1.isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (moduleInstance->sysobj.pAudioRateConv1.isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        f_st.site = &gb_emlrtRSI;
        if (moduleInstance->sysobj.pAudioRateConv1.filt1->isInitialized == 1) {
          moduleInstance->sysobj.pAudioRateConv1.filt1->isInitialized = 2;
          g_st.site = &g_emlrtRSI;
          if (moduleInstance->sysobj.pAudioRateConv1.filt1->isSetupComplete) {
            h_st.site = &g_emlrtRSI;

            /* System object Destructor function: dsp.FIRInterpolator */
          }
        }

        moduleInstance->sysobj.pAudioRateConv1.NumChannels = -1;
      }
    }
  }

  st.site = &ib_emlrtRSI;
  if (!moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.matlabCodegenIsDeleted)
  {
    moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.matlabCodegenIsDeleted
      = true;
    b_st.site = &hb_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.isInitialized ==
        1) {
      moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.isInitialized =
        2;
      d_st.site = &g_emlrtRSI;
      if (moduleInstance->sysobj.pAudioRateConv1.coder_buffer_pobj0.isSetupComplete)
      {
        e_st.site = &g_emlrtRSI;

        /* System object Destructor function: dsp.FIRInterpolator */
      }
    }
  }

  st.site = &ib_emlrtRSI;
  if (!moduleInstance->sysobj.pFMMod.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.pFMMod.matlabCodegenIsDeleted = true;
    b_st.site = &hb_emlrtRSI;
    c_st.site = &g_emlrtRSI;
    if (moduleInstance->sysobj.pFMMod.isInitialized == 1) {
      moduleInstance->sysobj.pFMMod.isInitialized = 2;
      d_st.site = &g_emlrtRSI;
      if (moduleInstance->sysobj.pFMMod.isSetupComplete) {
        e_st.site = &g_emlrtRSI;
        moduleInstance->sysobj.pFMMod.pCumSum = 0.0;
      }
    }
  }
}

static void mw__internal__call__setup(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp)
{
  static real_T dv[9] = { 2.0, 2.0, 2.0, -1.9040251967554684,
    0.052527530346444994, -1.4812126615102208, 0.276725222529707,
    0.013106167230134098, 0.0 };

  static real_T dv1[9] = { 1.0, 1.0, 1.0, -1.3532424201613737,
    0.024832572268483843, -0.17712571327206006, 0.45834817652499754,
    0.006369623214952671, 0.0 };

  static real_T dv2[4] = { 0.10510575636362372, 1.0, 1.0, 2.124553394925382 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  comm_FMBroadcastModulator *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  obj = &moduleInstance->sysobj;
  moduleInstance->sysobj.isSetupComplete = false;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  e_st.site = &b_emlrtRSI;
  f_st.site = &c_emlrtRSI;
  g_st.site = &d_emlrtRSI;
  obj->pFMMod.isInitialized = 0;
  obj->pFMMod.isInitialized = 0;
  obj->pFMMod.matlabCodegenIsDeleted = false;
  c_st.site = &i_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  e_st.site = &d_emlrtRSI;
  obj->pPreEmphFilter.isInitialized = 0;
  obj->pPreEmphFilter.isInitialized = 0;
  obj->pPreEmphFilter.NoTuningBeforeLockingCodeGenError = true;
  d_st.site = &l_emlrtRSI;

  /* System object Constructor function: dsp.SOSFilter */
  obj->pPreEmphFilter.cSFunObject.P0_ICRTP = 0.0;
  d_st.site = &l_emlrtRSI;
  e_st.site = &m_emlrtRSI;
  f_st.site = &n_emlrtRSI;
  g_st.site = &n_emlrtRSI;
  h_st.site = &m_emlrtRSI;
  for (i = 0; i < 9; i++) {
    obj->pPreEmphFilter.cSFunObject.P1_RTP1COEFF[i] = dv[i];
  }

  g_st.site = &n_emlrtRSI;
  h_st.site = &m_emlrtRSI;
  for (i = 0; i < 9; i++) {
    obj->pPreEmphFilter.cSFunObject.P2_RTP2COEFF[i] = dv1[i];
  }

  g_st.site = &n_emlrtRSI;
  h_st.site = &m_emlrtRSI;
  for (i = 0; i < 4; i++) {
    obj->pPreEmphFilter.cSFunObject.P3_RTP3COEFF[i] = dv2[i];
  }

  obj->pPreEmphFilter.NoTuningBeforeLockingCodeGenError = false;
  c_st.site = &j_emlrtRSI;
  obj->pAudioRateConv1.filt1 = NULL;
  obj->pAudioRateConv1.NumChannels = -1;
  d_st.site = &o_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  f_st.site = &q_emlrtRSI;
  g_st.site = &d_emlrtRSI;
  obj->pAudioRateConv1.isInitialized = 0;
  obj->pAudioRateConv1.isInitialized = 0;
  obj->pAudioRateConv1.matlabCodegenIsDeleted = false;
  obj->isSetupComplete = true;
}

static void mw__internal__call__reset(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 45 };

  static const int32_T iv4[2] = { 1, 5 };

  static const int32_T iv5[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  comm_FMBroadcastModulator *b_obj;
  comm_FMBroadcastModulator *obj;
  dsp_SOSFilter *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &r_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &g_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    b_st.site = &g_emlrtRSI;
    b_obj = obj;
    c_st.site = &t_emlrtRSI;
    c_obj = &obj->pPreEmphFilter;
    if (obj->pPreEmphFilter.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&c_st, 45, m, &u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&c_st, 45, m, &u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      d_st.site = &g_emlrtRSI;
      error(&d_st, b_y, getString(&d_st, message(&d_st, d_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (c_obj->isInitialized == 1) {
      d_st.site = &g_emlrtRSI;

      /* System object Initialization function: dsp.SOSFilter */
      for (i = 0; i < 6; i++) {
        c_obj->cSFunObject.W0_FILT_STATES[i] = c_obj->cSFunObject.P0_ICRTP;
      }
    }

    c_st.site = &u_emlrtRSI;
    SystemCore_reset(&c_st, &b_obj->pFMMod);
    c_st.site = &v_emlrtRSI;
    b_SystemCore_reset(&c_st, &b_obj->pAudioRateConv1);
  }
}

static void mw__internal__call__step(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3840], creal_T c_y0[19200])
{
  static real_T dv[9] = { 2.0, 2.0, 2.0, -1.9040251967554684,
    0.052527530346444994, -1.4812126615102208, 0.276725222529707,
    0.013106167230134098, 0.0 };

  static real_T dv1[9] = { 1.0, 1.0, 1.0, -1.3532424201613737,
    0.024832572268483843, -0.17712571327206006, 0.45834817652499754,
    0.006369623214952671, 0.0 };

  static real_T dv2[4] = { 0.10510575636362372, 1.0, 1.0, 2.124553394925382 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv3[2] = { 1, 45 };

  static const int32_T iv4[2] = { 1, 45 };

  static const int32_T iv5[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T f_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T g_u[5] = { 'r', 'e', 's', 'e', 't' };

  comm_FMBroadcastModulator *b_obj;
  comm_FMBroadcastModulator *c_obj;
  comm_FMBroadcastModulator *obj;
  dsp_SOSFilter *d_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T e_u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &s_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    b_obj = &moduleInstance->sysobj;
    c_st.site = &g_emlrtRSI;
    c_obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.isSetupComplete = false;
    if (moduleInstance->sysobj.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        u[i] = b_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 51; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      d_st.site = &g_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    c_obj->isInitialized = 1;
    d_st.site = &g_emlrtRSI;
    e_st.site = &h_emlrtRSI;
    f_st.site = &k_emlrtRSI;
    g_st.site = &b_emlrtRSI;
    h_st.site = &c_emlrtRSI;
    i_st.site = &d_emlrtRSI;
    c_obj->pFMMod.isInitialized = 0;
    c_obj->pFMMod.isInitialized = 0;
    c_obj->pFMMod.matlabCodegenIsDeleted = false;
    e_st.site = &i_emlrtRSI;
    f_st.site = &l_emlrtRSI;
    g_st.site = &d_emlrtRSI;
    c_obj->pPreEmphFilter.isInitialized = 0;
    c_obj->pPreEmphFilter.isInitialized = 0;
    c_obj->pPreEmphFilter.NoTuningBeforeLockingCodeGenError = true;
    f_st.site = &l_emlrtRSI;

    /* System object Constructor function: dsp.SOSFilter */
    c_obj->pPreEmphFilter.cSFunObject.P0_ICRTP = 0.0;
    f_st.site = &l_emlrtRSI;
    g_st.site = &m_emlrtRSI;
    h_st.site = &n_emlrtRSI;
    i_st.site = &n_emlrtRSI;
    j_st.site = &m_emlrtRSI;
    for (i = 0; i < 9; i++) {
      c_obj->pPreEmphFilter.cSFunObject.P1_RTP1COEFF[i] = dv[i];
    }

    i_st.site = &n_emlrtRSI;
    j_st.site = &m_emlrtRSI;
    for (i = 0; i < 9; i++) {
      c_obj->pPreEmphFilter.cSFunObject.P2_RTP2COEFF[i] = dv1[i];
    }

    i_st.site = &n_emlrtRSI;
    j_st.site = &m_emlrtRSI;
    for (i = 0; i < 4; i++) {
      c_obj->pPreEmphFilter.cSFunObject.P3_RTP3COEFF[i] = dv2[i];
    }

    c_obj->pPreEmphFilter.NoTuningBeforeLockingCodeGenError = false;
    e_st.site = &j_emlrtRSI;
    c_obj->pAudioRateConv1.filt1 = NULL;
    c_obj->pAudioRateConv1.NumChannels = -1;
    f_st.site = &o_emlrtRSI;
    g_st.site = &p_emlrtRSI;
    h_st.site = &q_emlrtRSI;
    i_st.site = &d_emlrtRSI;
    c_obj->pAudioRateConv1.isInitialized = 0;
    c_obj->pAudioRateConv1.isInitialized = 0;
    c_obj->pAudioRateConv1.matlabCodegenIsDeleted = false;
    c_obj->isSetupComplete = true;
    c_st.site = &g_emlrtRSI;
    c_obj = b_obj;
    d_st.site = &t_emlrtRSI;
    d_obj = &b_obj->pPreEmphFilter;
    if (b_obj->pPreEmphFilter.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&d_st, 45, m, &e_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 45; i++) {
        e_u[i] = f_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&d_st, 45, m, &e_u[0]);
      emlrtAssign(&e_y, m);
      for (i = 0; i < 5; i++) {
        c_u[i] = g_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&d_st, 5, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      e_st.site = &g_emlrtRSI;
      error(&e_st, d_y, getString(&e_st, message(&e_st, e_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (d_obj->isInitialized == 1) {
      e_st.site = &g_emlrtRSI;

      /* System object Initialization function: dsp.SOSFilter */
      for (i = 0; i < 6; i++) {
        d_obj->cSFunObject.W0_FILT_STATES[i] = d_obj->cSFunObject.P0_ICRTP;
      }
    }

    d_st.site = &u_emlrtRSI;
    SystemCore_reset(&d_st, &c_obj->pFMMod);
    d_st.site = &v_emlrtRSI;
    b_SystemCore_reset(&d_st, &c_obj->pAudioRateConv1);
  }

  b_st.site = &g_emlrtRSI;
  FMBroadcastModulator_stepImpl(moduleInstance, &b_st, obj, b_u0, c_y0);
}

static void SystemCore_reset(const emlrtStack *sp, comm_FMModulator *obj)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &g_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    st.site = &g_emlrtRSI;
    obj->pCumSum = 0.0;
  }
}

static void b_SystemCore_reset(const emlrtStack *sp, dsp_SampleRateConverter
  *obj)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 45 };

  static const int32_T iv4[2] = { 1, 5 };

  static const int32_T iv5[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  dsp_FIRInterpolator *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    st.site = &g_emlrtRSI;
    error(&st, y, getString(&st, message(&st, c_y, e_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    st.site = &g_emlrtRSI;
    b_st.site = &ab_emlrtRSI;
    b_obj = obj->filt1;
    if (b_obj->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 45, m, &u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 45, m, &u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 5; i++) {
        c_u[i] = d_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&b_st, 5, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      c_st.site = &g_emlrtRSI;
      error(&c_st, b_y, getString(&c_st, message(&c_st, d_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (b_obj->isInitialized == 1) {
      c_st.site = &g_emlrtRSI;

      /* System object Initialization function: dsp.FIRInterpolator */
      for (i = 0; i < 12; i++) {
        b_obj->cSFunObject.W0_TapDelayBuff[i] = 0.0;
      }

      b_obj->cSFunObject.W8_CircBuffIdx = 11;
    }
  }
}

static void FMBroadcastModulator_stepImpl(InstanceStruct_XnmIrDlggdYppmH1cMignF *
  moduleInstance, const emlrtStack *sp, comm_FMBroadcastModulator *obj, real_T
  x[3840], creal_T y[19200])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 4 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 5 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  dsp_SOSFilter *b_obj;
  dsp_SOSFilter *c_obj;
  dsp_SOSFilter *d_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  real_T yFilterOut[3840];
  int32_T i;
  char_T c_u[51];
  char_T u[45];
  char_T g_u[5];
  char_T e_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  st.site = &g_emlrtRSI;
  b_obj = &obj->pPreEmphFilter;
  if (obj->pPreEmphFilter.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &g_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, message(&b_st, c_y, e_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    c_obj = b_obj;
    c_st.site = &g_emlrtRSI;
    d_obj = b_obj;
    b_obj->isSetupComplete = false;
    if (b_obj->isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        c_u[i] = d_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &c_u[0]);
      emlrtAssign(&f_y, m);
      for (i = 0; i < 5; i++) {
        g_u[i] = h_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &g_u[0]);
      emlrtAssign(&g_y, m);
      d_st.site = &g_emlrtRSI;
      error(&d_st, d_y, getString(&d_st, message(&d_st, f_y, g_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    d_obj->isInitialized = 1;
    d_st.site = &g_emlrtRSI;
    e_st.site = &l_emlrtRSI;
    d_obj->NoTuningBeforeLockingCodeGenError = true;
    d_obj->isSetupComplete = true;
    c_st.site = &g_emlrtRSI;

    /* System object Initialization function: dsp.SOSFilter */
    for (i = 0; i < 6; i++) {
      c_obj->cSFunObject.W0_FILT_STATES[i] = c_obj->cSFunObject.P0_ICRTP;
    }
  }

  b_st.site = &g_emlrtRSI;
  SystemCore_stepImpl(b_obj, x, yFilterOut);
  st.site = &g_emlrtRSI;
  SystemCore_step(&st, &obj->pAudioRateConv1, yFilterOut, moduleInstance->yOut);
  st.site = &g_emlrtRSI;
  b_SystemCore_step(&st, &obj->pFMMod, moduleInstance->yOut, y);
}

static void SystemCore_stepImpl(dsp_SOSFilter *obj, real_T varargin_1[3840],
  real_T varargout_1[3840])
{
  emlrtStack st;
  st.site = &g_emlrtRSI;
  SOSFilter_outputImpl(obj, varargin_1, varargout_1);
  st.site = &g_emlrtRSI;
}

static void SOSFilter_outputImpl(dsp_SOSFilter *obj, real_T varargin_1[3840],
  real_T varargout_1[3840])
{
  real_T denAccum;
  real_T numAccum;
  int32_T i;
  int32_T ioIdx;

  /* System object Outputs function: dsp.SOSFilter */
  ioIdx = 0;
  for (i = 0; i < 3840; i++) {
    denAccum = (obj->cSFunObject.P3_RTP3COEFF[0] * varargin_1[ioIdx] -
                obj->cSFunObject.W0_FILT_STATES[0] *
                obj->cSFunObject.P2_RTP2COEFF[3]) -
      obj->cSFunObject.W0_FILT_STATES[1] * obj->cSFunObject.P2_RTP2COEFF[6];
    numAccum = (obj->cSFunObject.P1_RTP1COEFF[0] * denAccum +
                obj->cSFunObject.W0_FILT_STATES[0] *
                obj->cSFunObject.P1_RTP1COEFF[3]) +
      obj->cSFunObject.W0_FILT_STATES[1] * obj->cSFunObject.P1_RTP1COEFF[6];
    obj->cSFunObject.W0_FILT_STATES[1] = obj->cSFunObject.W0_FILT_STATES[0];
    obj->cSFunObject.W0_FILT_STATES[0] = denAccum;
    denAccum = (obj->cSFunObject.P3_RTP3COEFF[1] * numAccum -
                obj->cSFunObject.W0_FILT_STATES[2] *
                obj->cSFunObject.P2_RTP2COEFF[4]) -
      obj->cSFunObject.W0_FILT_STATES[3] * obj->cSFunObject.P2_RTP2COEFF[7];
    numAccum = (obj->cSFunObject.P1_RTP1COEFF[1] * denAccum +
                obj->cSFunObject.W0_FILT_STATES[2] *
                obj->cSFunObject.P1_RTP1COEFF[4]) +
      obj->cSFunObject.W0_FILT_STATES[3] * obj->cSFunObject.P1_RTP1COEFF[7];
    obj->cSFunObject.W0_FILT_STATES[3] = obj->cSFunObject.W0_FILT_STATES[2];
    obj->cSFunObject.W0_FILT_STATES[2] = denAccum;
    denAccum = (obj->cSFunObject.P3_RTP3COEFF[2] * numAccum -
                obj->cSFunObject.W0_FILT_STATES[4] *
                obj->cSFunObject.P2_RTP2COEFF[5]) -
      obj->cSFunObject.W0_FILT_STATES[5] * obj->cSFunObject.P2_RTP2COEFF[8];
    numAccum = (obj->cSFunObject.P1_RTP1COEFF[2] * denAccum +
                obj->cSFunObject.W0_FILT_STATES[4] *
                obj->cSFunObject.P1_RTP1COEFF[5]) +
      obj->cSFunObject.W0_FILT_STATES[5] * obj->cSFunObject.P1_RTP1COEFF[8];
    obj->cSFunObject.W0_FILT_STATES[5] = obj->cSFunObject.W0_FILT_STATES[4];
    obj->cSFunObject.W0_FILT_STATES[4] = denAccum;
    varargout_1[ioIdx] = obj->cSFunObject.P3_RTP3COEFF[3] * numAccum;
    ioIdx++;
  }
}

static void SystemCore_step(const emlrtStack *sp, dsp_SampleRateConverter *obj,
  real_T varargin_1[3840], real_T varargout_1[19200])
{
  static real_T dv[65] = { 0.00039561102219452246, -0.002983976230980955,
    0.011610196784205152, -0.032580318250770256, 0.07777280453339137,
    -0.184058231102062, 0.7470306454204599, 0.4899608273511664,
    -0.15319573002171769, 0.065791732582111, -0.026961421996019336,
    0.00914960940617656, -0.0021245194754464835, 0.00035503385241656543,
    -0.0025173900115016733, 0.008992755805525166, -0.02417608165661711,
    0.05676686681276813, -0.13855473509345184, 0.9324492201571888,
    0.22196772688259744, -0.07949140092000723, 0.03432017975170051,
    -0.013687217061957736, 0.004393415783853628, -0.0009011963807208406, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.0009011963807208406, 0.004393415783853628, -0.013687217061957736,
    0.03432017975170051, -0.07949140092000723, 0.22196772688259744,
    0.9324492201571888, -0.13855473509345184, 0.05676686681276813,
    -0.02417608165661711, 0.008992755805525166, -0.0025173900115016733,
    0.00035503385241656543, -0.0021245194754464835, 0.00914960940617656,
    -0.026961421996019336, 0.065791732582111, -0.15319573002171769,
    0.4899608273511664, 0.7470306454204599, -0.184058231102062,
    0.07777280453339137, -0.032580318250770256, 0.011610196784205152,
    -0.002983976230980955, 0.00039561102219452246 };

  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 4 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 45 };

  static const int32_T iv8[2] = { 1, 5 };

  static int16_T inSize[8] = { 3840, 1, 1, 1, 1, 1, 1, 1 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T i_u[5] = { 'r', 'e', 's', 'e', 't' };

  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  cell_wrap varSizes[1];
  dsp_FIRInterpolator *d_obj;
  dsp_SampleRateConverter *b_obj;
  dsp_SampleRateConverter *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[51];
  char_T u[45];
  char_T g_u[5];
  char_T e_u[4];
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = f_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &e_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &g_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, d_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    st.site = &g_emlrtRSI;
    b_obj = obj;
    b_st.site = &g_emlrtRSI;
    c_obj = obj;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        c_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 51, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      for (i = 0; i < 51; i++) {
        c_u[i] = d_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&b_st, 51, m, &c_u[0]);
      emlrtAssign(&e_y, m);
      for (i = 0; i < 5; i++) {
        g_u[i] = h_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&b_st, 5, m, &g_u[0]);
      emlrtAssign(&f_y, m);
      c_st.site = &g_emlrtRSI;
      error(&c_st, c_y, getString(&c_st, message(&c_st, e_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    c_obj->isInitialized = 1;
    c_st.site = &g_emlrtRSI;
    for (i = 0; i < 8; i++) {
      varSizes[0].f1[i] = (uint32_T)inSize[i];
    }

    c_obj->inputVarSize[0] = varSizes[0];
    c_st.site = &g_emlrtRSI;
    SampleRateConverter_validateInputsImpl(&c_st, c_obj);
    c_st.site = &g_emlrtRSI;
    d_st.site = &w_emlrtRSI;
    if (!(c_obj->filt1 == NULL)) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "EMLRT:runTime:NontunableHandleProp",
        "EMLRT:runTime:NontunableHandleProp", 0);
    }

    e_st.site = &x_emlrtRSI;
    f_st.site = &y_emlrtRSI;
    g_st.site = &d_emlrtRSI;
    c_obj->coder_buffer_pobj0.isInitialized = 0;
    c_obj->coder_buffer_pobj0.isInitialized = 0;
    f_st.site = &y_emlrtRSI;

    /* System object Constructor function: dsp.FIRInterpolator */
    c_obj->coder_buffer_pobj0.cSFunObject.P0_IC = 0.0;
    for (i = 0; i < 65; i++) {
      c_obj->coder_buffer_pobj0.cSFunObject.P1_FILTER_COEFF[i] = dv[i];
    }

    f_st.site = &y_emlrtRSI;
    g_st.site = &m_emlrtRSI;
    h_st.site = &n_emlrtRSI;
    c_obj->coder_buffer_pobj0.matlabCodegenIsDeleted = false;
    c_obj->filt1 = &c_obj->coder_buffer_pobj0;
    c_obj->NumChannels = 1;
    c_obj->isSetupComplete = true;
    b_st.site = &g_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    d_obj = b_obj->filt1;
    if (d_obj->isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&c_st, 45, m, &u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 45; i++) {
        u[i] = b_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&c_st, 45, m, &u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        g_u[i] = i_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &g_u[0]);
      emlrtAssign(&i_y, m);
      d_st.site = &g_emlrtRSI;
      error(&d_st, g_y, getString(&d_st, message(&d_st, h_y, i_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    if (d_obj->isInitialized == 1) {
      d_st.site = &g_emlrtRSI;

      /* System object Initialization function: dsp.FIRInterpolator */
      for (i = 0; i < 12; i++) {
        d_obj->cSFunObject.W0_TapDelayBuff[i] = 0.0;
      }

      d_obj->cSFunObject.W8_CircBuffIdx = 11;
    }
  }

  st.site = &g_emlrtRSI;
  anyInputSizeChanged = false;
  i = 0;
  exitg1 = false;
  while (!exitg1 && (i < 8)) {
    if (obj->inputVarSize[0].f1[i] != (uint32_T)inSize[i]) {
      anyInputSizeChanged = true;
      for (i = 0; i < 8; i++) {
        obj->inputVarSize[0].f1[i] = (uint32_T)inSize[i];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &g_emlrtRSI;
    SampleRateConverter_validateInputsImpl(&st, obj);
  }

  st.site = &g_emlrtRSI;
  SampleRateConverter_stepImpl(&st, obj, varargin_1, varargout_1);
}

static void SampleRateConverter_validateInputsImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj)
{
  static const int32_T iv[2] = { 1, 29 };

  static const int32_T iv1[2] = { 1, 29 };

  static char_T b_u[29] = { 'd', 's', 'p', ':', 's', 'y', 's', 't', 'e', 'm',
    ':', 'S', 'h', 'a', 'r', 'e', 'd', ':', 'n', 'u', 'm', 'C', 'h', 'a', 'n',
    'n', 'e', 'l', 's' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[29];
  st.prev = sp;
  st.tls = sp->tls;
  if ((obj->NumChannels != -1) && (obj->NumChannels != 0) && (obj->NumChannels
       != 1)) {
    for (i = 0; i < 29; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 29, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 29; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 29, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &jb_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &b_emlrtMCI), &b_emlrtMCI),
          &b_emlrtMCI);
  }
}

static void SampleRateConverter_stepImpl(const emlrtStack *sp,
  dsp_SampleRateConverter *obj, real_T u[3840], real_T y[19200])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 4 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 5 };

  static char_T e_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T g_u[4] = { 's', 't', 'e', 'p' };

  dsp_FIRInterpolator *b_obj;
  dsp_FIRInterpolator *c_obj;
  dsp_FIRInterpolator *d_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  int32_T i;
  char_T d_u[51];
  char_T b_u[45];
  char_T h_u[5];
  char_T f_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  st.site = &bb_emlrtRSI;
  b_obj = obj->filt1;
  if (b_obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 4; i++) {
      f_u[i] = g_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &f_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &g_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, message(&b_st, c_y, e_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (b_obj->isInitialized != 1) {
    b_st.site = &g_emlrtRSI;
    c_obj = b_obj;
    c_st.site = &g_emlrtRSI;
    d_obj = b_obj;
    b_obj->isSetupComplete = false;
    if (b_obj->isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        d_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &d_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        d_u[i] = e_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&c_st, 51, m, &d_u[0]);
      emlrtAssign(&f_y, m);
      for (i = 0; i < 5; i++) {
        h_u[i] = i_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&c_st, 5, m, &h_u[0]);
      emlrtAssign(&g_y, m);
      d_st.site = &g_emlrtRSI;
      error(&d_st, d_y, getString(&d_st, message(&d_st, f_y, g_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    d_obj->isInitialized = 1;
    d_st.site = &g_emlrtRSI;
    e_st.site = &y_emlrtRSI;

    /* System object Start function: dsp.FIRInterpolator */
    halideTBBInit(&d_obj->cSFunObject.W6_HalideTBBGrainSize, 1, false);
    d_obj->isSetupComplete = true;
    c_st.site = &g_emlrtRSI;

    /* System object Initialization function: dsp.FIRInterpolator */
    for (i = 0; i < 12; i++) {
      c_obj->cSFunObject.W0_TapDelayBuff[i] = 0.0;
    }

    c_obj->cSFunObject.W8_CircBuffIdx = 11;
  }

  b_st.site = &g_emlrtRSI;
  b_SystemCore_stepImpl(b_obj, u, y);
}

static void b_SystemCore_stepImpl(dsp_FIRInterpolator *obj, real_T varargin_1
  [3840], real_T varargout_1[19200])
{
  emlrtStack st;
  st.site = &g_emlrtRSI;
  FIRInterpolator_outputImpl(obj, varargin_1, varargout_1);
  st.site = &g_emlrtRSI;
}

static void FIRInterpolator_outputImpl(dsp_FIRInterpolator *obj, real_T
  varargin_1[3840], real_T varargout_1[19200])
{
  real_T U0[3840];
  int32_T i;
  int32_T indx;
  int32_T j;
  memcpy(&U0[0], &varargin_1[0], 3840U * sizeof(real_T));

  /* System object Outputs function: dsp.FIRInterpolator */
  for (i = 0; i < 12; i++) {
    obj->cSFunObject.W5_ContextBuffer[i] = obj->cSFunObject.W0_TapDelayBuff[11 -
      i];
  }

  /* Flip the polyphase buffer */
  for (i = 0; i < 5; i++) {
    indx = i * 13;
    for (j = 0; j < 13; j++) {
      obj->cSFunObject.W7_flippedPolyphaseCoeff[indx + j] =
        obj->cSFunObject.P1_FILTER_COEFF[(indx - j) + 12];
    }
  }

  processHalide_firInterpolatorRRD(&U0[0U],
    &obj->cSFunObject.W7_flippedPolyphaseCoeff[0U], 3840, 13, 1, 5,
    &obj->cSFunObject.W0_TapDelayBuff[0U], &varargout_1[0U],
    &obj->cSFunObject.W5_ContextBuffer[0U],
    obj->cSFunObject.W6_HalideTBBGrainSize, 0);
  for (i = 0; i < 12; i++) {
    obj->cSFunObject.W0_TapDelayBuff[i] = obj->cSFunObject.W5_ContextBuffer[11 -
      i];
  }
}

static void b_SystemCore_step(const emlrtStack *sp, comm_FMModulator *obj,
  real_T varargin_1[19200], creal_T varargout_1[19200])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 4 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 5 };

  static int16_T inSize[8] = { 19200, 1, 1, 1, 1, 1, 1, 1 };

  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T h_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T f_u[4] = { 's', 't', 'e', 'p' };

  cell_wrap varSizes[1];
  comm_FMModulator *b_obj;
  comm_FMModulator *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T c_u[51];
  char_T u[45];
  char_T g_u[5];
  char_T e_u[4];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 45; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 4; k++) {
      e_u[k] = f_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &e_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &g_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, d_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    st.site = &g_emlrtRSI;
    b_obj = obj;
    b_st.site = &g_emlrtRSI;
    c_obj = obj;
    obj->isSetupComplete = false;
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 51, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      for (k = 0; k < 51; k++) {
        c_u[k] = d_u[k];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&b_st, 51, m, &c_u[0]);
      emlrtAssign(&e_y, m);
      for (k = 0; k < 5; k++) {
        g_u[k] = h_u[k];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&b_st, 5, m, &g_u[0]);
      emlrtAssign(&f_y, m);
      c_st.site = &g_emlrtRSI;
      error(&c_st, c_y, getString(&c_st, message(&c_st, e_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    c_obj->isInitialized = 1;
    c_st.site = &g_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = (uint32_T)inSize[k];
    }

    c_obj->inputVarSize[0] = varSizes[0];
    c_st.site = &g_emlrtRSI;
    c_obj->pFs = 240000.0;
    c_obj->pCumSum = 0.0;
    c_obj->isSetupComplete = true;
    b_st.site = &g_emlrtRSI;
    b_obj->pCumSum = 0.0;
  }

  st.site = &g_emlrtRSI;
  k = 0;
  exitg1 = false;
  while (!exitg1 && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  st.site = &g_emlrtRSI;
  FMModulator_stepImpl(obj, varargin_1, varargout_1);
}

static void FMModulator_stepImpl(comm_FMModulator *obj, real_T x[19200], creal_T
  y[19200])
{
  real_T intY[19200];
  real_T b_intY;
  int32_T i;
  memcpy(&intY[0], &x[0], 19200U * sizeof(real_T));
  useConstantDim(intY, 1);
  for (i = 0; i < 19200; i++) {
    b_intY = obj->pCumSum + intY[i] / obj->pFs;
    y[i].re = b_intY * 0.0;
    y[i].im = b_intY * 471238.89803846896;
    intY[i] = b_intY;
  }

  b_exp(y);
  obj->pCumSum = intY[19199];
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static void useConstantDim(real_T varargin_2[19200], int32_T varargin_3)
{
  int32_T k;
  if (varargin_3 == 1) {
    for (k = 0; k < 19199; k++) {
      varargin_2[k + 1] += varargin_2[k];
    }
  }
}

static void b_exp(creal_T x[19200])
{
  real_T r;
  real_T x_re;
  int32_T k;
  for (k = 0; k < 19200; k++) {
    if (x[k].re == 0.0) {
      x_re = muDoubleScalarCos(x[k].im);
      r = muDoubleScalarSin(x[k].im);
    } else if (x[k].im == 0.0) {
      x_re = muDoubleScalarExp(x[k].re);
      r = 0.0;
    } else if (muDoubleScalarIsInf(x[k].im) && muDoubleScalarIsInf(x[k].re) &&
               (x[k].re < 0.0)) {
      x_re = 0.0;
      r = 0.0;
    } else {
      r = muDoubleScalarExp(x[k].re / 2.0);
      x_re = r * (r * muDoubleScalarCos(x[k].im));
      r *= r * muDoubleScalarSin(x[k].im);
    }

    x[k].re = x_re;
    x[k].im = r;
  }
}

static void init_simulink_io_address(InstanceStruct_XnmIrDlggdYppmH1cMignF
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[3840])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (creal_T (*)[19200])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_XnmIrDlggdYppmH1cMignF(SimStruct *S, int_T tid)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_XnmIrDlggdYppmH1cMignF(SimStruct *S, int_T tid)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
  InstanceStruct_XnmIrDlggdYppmH1cMignF *moduleInstance =
    (InstanceStruct_XnmIrDlggdYppmH1cMignF *)calloc(1, sizeof
    (InstanceStruct_XnmIrDlggdYppmH1cMignF));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_XnmIrDlggdYppmH1cMignF);
  ssSetmdlInitializeConditions(S, mdlInitialize_XnmIrDlggdYppmH1cMignF);
  ssSetmdlUpdate(S, mdlUpdate_XnmIrDlggdYppmH1cMignF);
  ssSetmdlDerivatives(S, mdlDerivatives_XnmIrDlggdYppmH1cMignF);
  ssSetmdlTerminate(S, mdlTerminate_XnmIrDlggdYppmH1cMignF);
  ssSetmdlEnable(S, mdlEnable_XnmIrDlggdYppmH1cMignF);
  ssSetmdlDisable(S, mdlDisable_XnmIrDlggdYppmH1cMignF);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_XnmIrDlggdYppmH1cMignF(SimStruct *S)
{
}

void method_dispatcher_XnmIrDlggdYppmH1cMignF(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_XnmIrDlggdYppmH1cMignF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_XnmIrDlggdYppmH1cMignF(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: XnmIrDlggdYppmH1cMignF.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_XnmIrDlggdYppmH1cMignF_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxArray * elem_30;
  mxArray * elem_31;
  mxArray * elem_32;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("iHalideFIRInterpolator.hpp");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("BlockModules");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(1,3);
  elem_12 = mxCreateString("addIncludePaths");
  mxSetCell(elem_11,0,elem_12);
  elem_13 = mxCreateCellMatrix(1,2);
  elem_14 = mxCreateString(
    "/usr/local/MATLAB/R2026a/toolbox/dsp/halidesim/include");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateString("/usr/local/MATLAB/R2026a/toolbox/dsp/include");
  mxSetCell(elem_13,1,elem_15);
  mxSetCell(elem_11,1,elem_13);
  elem_16 = mxCreateCellMatrix(1,2);
  elem_17 = mxCreateString("BlockModules");
  mxSetCell(elem_16,0,elem_17);
  elem_18 = mxCreateString("BlockModules");
  mxSetCell(elem_16,1,elem_18);
  mxSetCell(elem_11,2,elem_16);
  mxSetCell(elem_1,2,elem_11);
  elem_19 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_19);
  elem_20 = mxCreateCellMatrix(1,3);
  elem_21 = mxCreateString("addLinkFlags");
  mxSetCell(elem_20,0,elem_21);
  elem_22 = mxCreateCellMatrix(1,3);
  elem_23 = mxCreateString(" -Wl,--no-as-needed");
  mxSetCell(elem_22,0,elem_23);
  elem_24 = mxCreateString("-lmwdsp_halidesim");
  mxSetCell(elem_22,1,elem_24);
  elem_25 = mxCreateString("-Wl,--as-needed");
  mxSetCell(elem_22,2,elem_25);
  mxSetCell(elem_20,1,elem_22);
  elem_26 = mxCreateCellMatrix(1,3);
  elem_27 = mxCreateString("BlockModules");
  mxSetCell(elem_26,0,elem_27);
  elem_28 = mxCreateString("BlockModules");
  mxSetCell(elem_26,1,elem_28);
  elem_29 = mxCreateString("BlockModules");
  mxSetCell(elem_26,2,elem_29);
  mxSetCell(elem_20,2,elem_26);
  mxSetCell(elem_1,4,elem_20);
  elem_30 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_30);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_31 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_31);
  mxSetCell(mxBIArgs,1,elem_31);
  elem_32 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_32);
  return mxBIArgs;
}

mxArray *cgxe_XnmIrDlggdYppmH1cMignF_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "/usr/local/MATLAB/R2026a/toolbox/dsp/halidesim/include");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}

void cgxe_XnmIrDlggdYppmH1cMignF_get_all_custom_code_global_var_addr(void
  ** gVarAddrArray)
{
  /* This function is no-op if OOP or no custom code */
  (void)gVarAddrArray;
}
