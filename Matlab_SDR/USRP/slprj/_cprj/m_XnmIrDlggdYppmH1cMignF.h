#ifndef __XnmIrDlggdYppmH1cMignF_h__
#define __XnmIrDlggdYppmH1cMignF_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Headers From Include Tags */

/* Type Definitions */
#ifndef struct_tag_sGaAmWJmK5HvPUvd2k3PkCG
#define struct_tag_sGaAmWJmK5HvPUvd2k3PkCG

struct tag_sGaAmWJmK5HvPUvd2k3PkCG
{
  uint32_T nanflag;
  uint32_T ComparisonMethod;
};

#endif                                 /* struct_tag_sGaAmWJmK5HvPUvd2k3PkCG */

#ifndef typedef_sGaAmWJmK5HvPUvd2k3PkCG
#define typedef_sGaAmWJmK5HvPUvd2k3PkCG

typedef struct tag_sGaAmWJmK5HvPUvd2k3PkCG sGaAmWJmK5HvPUvd2k3PkCG;

#endif                                 /* typedef_sGaAmWJmK5HvPUvd2k3PkCG */

#ifndef struct_tag_yXNlxAMtkozv4BiPFKvBVC
#define struct_tag_yXNlxAMtkozv4BiPFKvBVC

struct tag_yXNlxAMtkozv4BiPFKvBVC
{
  boolean_T f1;
};

#endif                                 /* struct_tag_yXNlxAMtkozv4BiPFKvBVC */

#ifndef typedef_s_yXNlxAMtkozv4BiPFKvBVC
#define typedef_s_yXNlxAMtkozv4BiPFKvBVC

typedef struct tag_yXNlxAMtkozv4BiPFKvBVC s_yXNlxAMtkozv4BiPFKvBVC;

#endif                                 /* typedef_s_yXNlxAMtkozv4BiPFKvBVC */

#ifndef struct_tag_FE4XZfO8jnPN6pOCEVr2RF
#define struct_tag_FE4XZfO8jnPN6pOCEVr2RF

struct tag_FE4XZfO8jnPN6pOCEVr2RF
{
  int32_T S0_isInitialized;
  real_T W0_FILT_STATES[6];
  int32_T W1_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[9];
  real_T P2_RTP2COEFF[9];
  real_T P3_RTP3COEFF[4];
};

#endif                                 /* struct_tag_FE4XZfO8jnPN6pOCEVr2RF */

#ifndef typedef_dsp_SOSFilter_0
#define typedef_dsp_SOSFilter_0

typedef struct tag_FE4XZfO8jnPN6pOCEVr2RF dsp_SOSFilter_0;

#endif                                 /* typedef_dsp_SOSFilter_0 */

#ifndef struct_tag_0mJRNvdGyuOQ3Z3S5vdwTB
#define struct_tag_0mJRNvdGyuOQ3Z3S5vdwTB

struct tag_0mJRNvdGyuOQ3Z3S5vdwTB
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_SOSFilter_0 cSFunObject;
  boolean_T NoTuningBeforeLockingCodeGenError;
};

#endif                                 /* struct_tag_0mJRNvdGyuOQ3Z3S5vdwTB */

#ifndef typedef_dsp_SOSFilter
#define typedef_dsp_SOSFilter

typedef struct tag_0mJRNvdGyuOQ3Z3S5vdwTB dsp_SOSFilter;

#endif                                 /* typedef_dsp_SOSFilter */

#ifndef struct_tag_BOzIjTmjywP27QZbulkfFD
#define struct_tag_BOzIjTmjywP27QZbulkfFD

struct tag_BOzIjTmjywP27QZbulkfFD
{
  int32_T S0_isInitialized;
  real_T W0_TapDelayBuff[12];
  real_T W1_REVCOEF_DWORK[65];
  real_T W2_TRANSCOEF_DWORK[130];
  real_T W3_REVTRANSCOEF_DWORK[130];
  int32_T W4_PrevNumChan;
  real_T W5_ContextBuffer[12];
  int32_T W6_HalideTBBGrainSize;
  real_T W7_flippedPolyphaseCoeff[65];
  int32_T W8_CircBuffIdx;
  real_T P0_IC;
  real_T P1_FILTER_COEFF[65];
};

#endif                                 /* struct_tag_BOzIjTmjywP27QZbulkfFD */

#ifndef typedef_dsp_FIRInterpolator_2
#define typedef_dsp_FIRInterpolator_2

typedef struct tag_BOzIjTmjywP27QZbulkfFD dsp_FIRInterpolator_2;

#endif                                 /* typedef_dsp_FIRInterpolator_2 */

#ifndef struct_tag_SRnFB8JeL34kv1vUuFaPu
#define struct_tag_SRnFB8JeL34kv1vUuFaPu

struct tag_SRnFB8JeL34kv1vUuFaPu
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  dsp_FIRInterpolator_2 cSFunObject;
};

#endif                                 /* struct_tag_SRnFB8JeL34kv1vUuFaPu */

#ifndef typedef_dsp_FIRInterpolator
#define typedef_dsp_FIRInterpolator

typedef struct tag_SRnFB8JeL34kv1vUuFaPu dsp_FIRInterpolator;

#endif                                 /* typedef_dsp_FIRInterpolator */

#ifndef struct_tag_sfCgmeHIuDKYU1qnY1ZNkf
#define struct_tag_sfCgmeHIuDKYU1qnY1ZNkf

struct tag_sfCgmeHIuDKYU1qnY1ZNkf
{
  real_T scalarA;
};

#endif                                 /* struct_tag_sfCgmeHIuDKYU1qnY1ZNkf */

#ifndef typedef_sfCgmeHIuDKYU1qnY1ZNkf
#define typedef_sfCgmeHIuDKYU1qnY1ZNkf

typedef struct tag_sfCgmeHIuDKYU1qnY1ZNkf sfCgmeHIuDKYU1qnY1ZNkf;

#endif                                 /* typedef_sfCgmeHIuDKYU1qnY1ZNkf */

#ifndef struct_tag_DuJTIxHyPH0sh2f3wcGFk
#define struct_tag_DuJTIxHyPH0sh2f3wcGFk

struct tag_DuJTIxHyPH0sh2f3wcGFk
{
  s_yXNlxAMtkozv4BiPFKvBVC _data;
};

#endif                                 /* struct_tag_DuJTIxHyPH0sh2f3wcGFk */

#ifndef typedef_s_DuJTIxHyPH0sh2f3wcGFk
#define typedef_s_DuJTIxHyPH0sh2f3wcGFk

typedef struct tag_DuJTIxHyPH0sh2f3wcGFk s_DuJTIxHyPH0sh2f3wcGFk;

#endif                                 /* typedef_s_DuJTIxHyPH0sh2f3wcGFk */

#ifndef struct_tag_UVZERLDcVXOa8adVKx7rkE
#define struct_tag_UVZERLDcVXOa8adVKx7rkE

struct tag_UVZERLDcVXOa8adVKx7rkE
{
  sfCgmeHIuDKYU1qnY1ZNkf nontunableWorkspace;
};

#endif                                 /* struct_tag_UVZERLDcVXOa8adVKx7rkE */

#ifndef typedef_s_UVZERLDcVXOa8adVKx7rkE
#define typedef_s_UVZERLDcVXOa8adVKx7rkE

typedef struct tag_UVZERLDcVXOa8adVKx7rkE s_UVZERLDcVXOa8adVKx7rkE;

#endif                                 /* typedef_s_UVZERLDcVXOa8adVKx7rkE */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_tag_Bn0XhOW1Sa5q9fHk3Ojj9C
#define struct_tag_Bn0XhOW1Sa5q9fHk3Ojj9C

struct tag_Bn0XhOW1Sa5q9fHk3Ojj9C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  real_T pFs;
  real_T pCumSum;
};

#endif                                 /* struct_tag_Bn0XhOW1Sa5q9fHk3Ojj9C */

#ifndef typedef_comm_FMModulator
#define typedef_comm_FMModulator

typedef struct tag_Bn0XhOW1Sa5q9fHk3Ojj9C comm_FMModulator;

#endif                                 /* typedef_comm_FMModulator */

#ifndef struct_tag_wKOYNAx1t15iIPX49PIjLF
#define struct_tag_wKOYNAx1t15iIPX49PIjLF

struct tag_wKOYNAx1t15iIPX49PIjLF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[1];
  int32_T NumChannels;
  dsp_FIRInterpolator *filt1;
  dsp_FIRInterpolator coder_buffer_pobj0;
};

#endif                                 /* struct_tag_wKOYNAx1t15iIPX49PIjLF */

#ifndef typedef_dsp_SampleRateConverter
#define typedef_dsp_SampleRateConverter

typedef struct tag_wKOYNAx1t15iIPX49PIjLF dsp_SampleRateConverter;

#endif                                 /* typedef_dsp_SampleRateConverter */

#ifndef struct_tag_1jigvl2vxMpm0bRAmBi7NF
#define struct_tag_1jigvl2vxMpm0bRAmBi7NF

struct tag_1jigvl2vxMpm0bRAmBi7NF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  comm_FMModulator pFMMod;
  dsp_SOSFilter pPreEmphFilter;
  dsp_SampleRateConverter pAudioRateConv1;
};

#endif                                 /* struct_tag_1jigvl2vxMpm0bRAmBi7NF */

#ifndef typedef_comm_FMBroadcastModulator
#define typedef_comm_FMBroadcastModulator

typedef struct tag_1jigvl2vxMpm0bRAmBi7NF comm_FMBroadcastModulator;

#endif                                 /* typedef_comm_FMBroadcastModulator */

#ifndef struct_tag_smzGQHcQ1fZcSCW5rtLpn4F
#define struct_tag_smzGQHcQ1fZcSCW5rtLpn4F

struct tag_smzGQHcQ1fZcSCW5rtLpn4F
{
  boolean_T CaseSensitivity;
  char_T PartialMatching[6];
  boolean_T StructExpand;
  boolean_T IgnoreNulls;
  boolean_T SupportOverrides;
};

#endif                                 /* struct_tag_smzGQHcQ1fZcSCW5rtLpn4F */

#ifndef typedef_smzGQHcQ1fZcSCW5rtLpn4F
#define typedef_smzGQHcQ1fZcSCW5rtLpn4F

typedef struct tag_smzGQHcQ1fZcSCW5rtLpn4F smzGQHcQ1fZcSCW5rtLpn4F;

#endif                                 /* typedef_smzGQHcQ1fZcSCW5rtLpn4F */

#ifndef struct_tag_sGfO8d1lcqmTeqzXnzDlfiD
#define struct_tag_sGfO8d1lcqmTeqzXnzDlfiD

struct tag_sGfO8d1lcqmTeqzXnzDlfiD
{
  real_T coeffs1[65];
  real_T rcf1[2];
};

#endif                                 /* struct_tag_sGfO8d1lcqmTeqzXnzDlfiD */

#ifndef typedef_sGfO8d1lcqmTeqzXnzDlfiD
#define typedef_sGfO8d1lcqmTeqzXnzDlfiD

typedef struct tag_sGfO8d1lcqmTeqzXnzDlfiD sGfO8d1lcqmTeqzXnzDlfiD;

#endif                                 /* typedef_sGfO8d1lcqmTeqzXnzDlfiD */

#ifndef struct_tag_Mq55LRTpx3F49SLl4MgJ3G
#define struct_tag_Mq55LRTpx3F49SLl4MgJ3G

struct tag_Mq55LRTpx3F49SLl4MgJ3G
{
  real_T f1[2];
};

#endif                                 /* struct_tag_Mq55LRTpx3F49SLl4MgJ3G */

#ifndef typedef_b_cell_wrap
#define typedef_b_cell_wrap

typedef struct tag_Mq55LRTpx3F49SLl4MgJ3G b_cell_wrap;

#endif                                 /* typedef_b_cell_wrap */

#ifndef struct_tag_FDrX8kOEjZXLXru8nW4swE
#define struct_tag_FDrX8kOEjZXLXru8nW4swE

struct tag_FDrX8kOEjZXLXru8nW4swE
{
  char_T f1[6];
  char_T f2[6];
};

#endif                                 /* struct_tag_FDrX8kOEjZXLXru8nW4swE */

#ifndef typedef_s_FDrX8kOEjZXLXru8nW4swE
#define typedef_s_FDrX8kOEjZXLXru8nW4swE

typedef struct tag_FDrX8kOEjZXLXru8nW4swE s_FDrX8kOEjZXLXru8nW4swE;

#endif                                 /* typedef_s_FDrX8kOEjZXLXru8nW4swE */

#ifndef struct_tag_hEVPFOGCYhJIualz6vMiMC
#define struct_tag_hEVPFOGCYhJIualz6vMiMC

struct tag_hEVPFOGCYhJIualz6vMiMC
{
  char_T f1[4];
  char_T f2[8];
  char_T f3[6];
  char_T f4[6];
  char_T f5[6];
  char_T f6[8];
};

#endif                                 /* struct_tag_hEVPFOGCYhJIualz6vMiMC */

#ifndef typedef_cell
#define typedef_cell

typedef struct tag_hEVPFOGCYhJIualz6vMiMC cell;

#endif                                 /* typedef_cell */

#ifndef struct_tag_Hm6EPE5ncyWd4RGCxxctzF
#define struct_tag_Hm6EPE5ncyWd4RGCxxctzF

struct tag_Hm6EPE5ncyWd4RGCxxctzF
{
  char_T f1[30];
  char_T f2[29];
  char_T f3[30];
  char_T f4[30];
  char_T f5[39];
};

#endif                                 /* struct_tag_Hm6EPE5ncyWd4RGCxxctzF */

#ifndef typedef_b_cell
#define typedef_b_cell

typedef struct tag_Hm6EPE5ncyWd4RGCxxctzF b_cell;

#endif                                 /* typedef_b_cell */

#ifndef struct_tag_ge1UD3YqHcNerzgtJ4AjXF
#define struct_tag_ge1UD3YqHcNerzgtJ4AjXF

struct tag_ge1UD3YqHcNerzgtJ4AjXF
{
  char_T f1[6];
};

#endif                                 /* struct_tag_ge1UD3YqHcNerzgtJ4AjXF */

#ifndef typedef_c_cell_wrap
#define typedef_c_cell_wrap

typedef struct tag_ge1UD3YqHcNerzgtJ4AjXF c_cell_wrap;

#endif                                 /* typedef_c_cell_wrap */

#ifndef struct_tag_n5V6NPhGd1s3l2q7z9eOR
#define struct_tag_n5V6NPhGd1s3l2q7z9eOR

struct tag_n5V6NPhGd1s3l2q7z9eOR
{
  char_T f1[27];
  char_T f2[21];
  char_T f3[26];
};

#endif                                 /* struct_tag_n5V6NPhGd1s3l2q7z9eOR */

#ifndef typedef_c_cell
#define typedef_c_cell

typedef struct tag_n5V6NPhGd1s3l2q7z9eOR c_cell;

#endif                                 /* typedef_c_cell */

#ifndef struct_tag_VqK0uXiUXuliBvHmvcLR0F
#define struct_tag_VqK0uXiUXuliBvHmvcLR0F

struct tag_VqK0uXiUXuliBvHmvcLR0F
{
  char_T f1[28];
  char_T f2[22];
  char_T f3[35];
  char_T f4[26];
  char_T f5[36];
  char_T f6[39];
};

#endif                                 /* struct_tag_VqK0uXiUXuliBvHmvcLR0F */

#ifndef typedef_d_cell
#define typedef_d_cell

typedef struct tag_VqK0uXiUXuliBvHmvcLR0F d_cell;

#endif                                 /* typedef_d_cell */

#ifndef struct_tag_L5JvjW1A13FyCQi5N783sB
#define struct_tag_L5JvjW1A13FyCQi5N783sB

struct tag_L5JvjW1A13FyCQi5N783sB
{
  char_T f1[7];
};

#endif                                 /* struct_tag_L5JvjW1A13FyCQi5N783sB */

#ifndef typedef_d_cell_wrap
#define typedef_d_cell_wrap

typedef struct tag_L5JvjW1A13FyCQi5N783sB d_cell_wrap;

#endif                                 /* typedef_d_cell_wrap */

#ifndef struct_tag_6jR4RtbHdjyG00WYqgD5nF
#define struct_tag_6jR4RtbHdjyG00WYqgD5nF

struct tag_6jR4RtbHdjyG00WYqgD5nF
{
  char_T f1[16];
};

#endif                                 /* struct_tag_6jR4RtbHdjyG00WYqgD5nF */

#ifndef typedef_e_cell_wrap
#define typedef_e_cell_wrap

typedef struct tag_6jR4RtbHdjyG00WYqgD5nF e_cell_wrap;

#endif                                 /* typedef_e_cell_wrap */

#ifndef struct_tag_njgfiHhWBCqqqpWsKZxr7F
#define struct_tag_njgfiHhWBCqqqpWsKZxr7F

struct tag_njgfiHhWBCqqqpWsKZxr7F
{
  char_T f1[15];
  char_T f2[15];
  char_T f3[12];
  char_T f4[11];
  char_T f5[16];
};

#endif                                 /* struct_tag_njgfiHhWBCqqqpWsKZxr7F */

#ifndef typedef_e_cell
#define typedef_e_cell

typedef struct tag_njgfiHhWBCqqqpWsKZxr7F e_cell;

#endif                                 /* typedef_e_cell */

#ifndef struct_tag_7dsc8omoFw97n0LoBS1x9E
#define struct_tag_7dsc8omoFw97n0LoBS1x9E

struct tag_7dsc8omoFw97n0LoBS1x9E
{
  char_T f1[10];
  char_T f2[18];
};

#endif                                 /* struct_tag_7dsc8omoFw97n0LoBS1x9E */

#ifndef typedef_f_cell
#define typedef_f_cell

typedef struct tag_7dsc8omoFw97n0LoBS1x9E f_cell;

#endif                                 /* typedef_f_cell */

#ifndef struct_tag_i3CXGMfI4uXQNZD9jAlKv
#define struct_tag_i3CXGMfI4uXQNZD9jAlKv

struct tag_i3CXGMfI4uXQNZD9jAlKv
{
  char_T f1[9];
  char_T f2[14];
  char_T f3[9];
  real_T f4[9];
  char_T f5[11];
  real_T f6[9];
  char_T f7[11];
  real_T f8[4];
};

#endif                                 /* struct_tag_i3CXGMfI4uXQNZD9jAlKv */

#ifndef typedef_g_cell
#define typedef_g_cell

typedef struct tag_i3CXGMfI4uXQNZD9jAlKv g_cell;

#endif                                 /* typedef_g_cell */

#ifndef struct_tag_XbHrBZTkjK43BJRDglTXhB
#define struct_tag_XbHrBZTkjK43BJRDglTXhB

struct tag_XbHrBZTkjK43BJRDglTXhB
{
  char_T f1[9];
  char_T f2[9];
  char_T f3[11];
  char_T f4[11];
};

#endif                                 /* struct_tag_XbHrBZTkjK43BJRDglTXhB */

#ifndef typedef_h_cell
#define typedef_h_cell

typedef struct tag_XbHrBZTkjK43BJRDglTXhB h_cell;

#endif                                 /* typedef_h_cell */

#ifndef struct_tag_k3Twd35Q4kKfU8rc3WDtTB
#define struct_tag_k3Twd35Q4kKfU8rc3WDtTB

struct tag_k3Twd35Q4kKfU8rc3WDtTB
{
  char_T f1[9];
  char_T f2[15];
  char_T f3[16];
  char_T f4[19];
};

#endif                                 /* struct_tag_k3Twd35Q4kKfU8rc3WDtTB */

#ifndef typedef_i_cell
#define typedef_i_cell

typedef struct tag_k3Twd35Q4kKfU8rc3WDtTB i_cell;

#endif                                 /* typedef_i_cell */

#ifndef struct_tag_qA1Hv158AKecEBD8o1x36F
#define struct_tag_qA1Hv158AKecEBD8o1x36F

struct tag_qA1Hv158AKecEBD8o1x36F
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[4];
  char_T f4[5];
  char_T f5[5];
  char_T f6[6];
  char_T f7[5];
  char_T f8[6];
  char_T f9[5];
  char_T f10[6];
};

#endif                                 /* struct_tag_qA1Hv158AKecEBD8o1x36F */

#ifndef typedef_j_cell
#define typedef_j_cell

typedef struct tag_qA1Hv158AKecEBD8o1x36F j_cell;

#endif                                 /* typedef_j_cell */

#ifndef struct_tag_Ttp4vl5MNpIOXZPqljIq7B
#define struct_tag_Ttp4vl5MNpIOXZPqljIq7B

struct tag_Ttp4vl5MNpIOXZPqljIq7B
{
  char_T f1[5];
  char_T f2[7];
};

#endif                                 /* struct_tag_Ttp4vl5MNpIOXZPqljIq7B */

#ifndef typedef_k_cell
#define typedef_k_cell

typedef struct tag_Ttp4vl5MNpIOXZPqljIq7B k_cell;

#endif                                 /* typedef_k_cell */

#ifndef struct_tag_QUrJGLT4DsCLhnuPIs5e8F
#define struct_tag_QUrJGLT4DsCLhnuPIs5e8F

struct tag_QUrJGLT4DsCLhnuPIs5e8F
{
  char_T f1[2];
};

#endif                                 /* struct_tag_QUrJGLT4DsCLhnuPIs5e8F */

#ifndef typedef_f_cell_wrap
#define typedef_f_cell_wrap

typedef struct tag_QUrJGLT4DsCLhnuPIs5e8F f_cell_wrap;

#endif                                 /* typedef_f_cell_wrap */

#ifndef struct_tag_SwJNGR5YkTTY74yds4y5FE
#define struct_tag_SwJNGR5YkTTY74yds4y5FE

struct tag_SwJNGR5YkTTY74yds4y5FE
{
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9;
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
  char_T f13[2];
  char_T f14[2];
  char_T f15[2];
};

#endif                                 /* struct_tag_SwJNGR5YkTTY74yds4y5FE */

#ifndef typedef_s_SwJNGR5YkTTY74yds4y5FE
#define typedef_s_SwJNGR5YkTTY74yds4y5FE

typedef struct tag_SwJNGR5YkTTY74yds4y5FE s_SwJNGR5YkTTY74yds4y5FE;

#endif                                 /* typedef_s_SwJNGR5YkTTY74yds4y5FE */

#ifndef struct_tag_ybAOTZlGkhsLg3nUNzQFhF
#define struct_tag_ybAOTZlGkhsLg3nUNzQFhF

struct tag_ybAOTZlGkhsLg3nUNzQFhF
{
  char_T f1[19];
  real_T f2;
  char_T f3[9];
  real_T f4[65];
};

#endif                                 /* struct_tag_ybAOTZlGkhsLg3nUNzQFhF */

#ifndef typedef_l_cell
#define typedef_l_cell

typedef struct tag_ybAOTZlGkhsLg3nUNzQFhF l_cell;

#endif                                 /* typedef_l_cell */

#ifndef struct_tag_prhheW1izahKoq8u1zLvBB
#define struct_tag_prhheW1izahKoq8u1zLvBB

struct tag_prhheW1izahKoq8u1zLvBB
{
  char_T f1[19];
  char_T f2[9];
};

#endif                                 /* struct_tag_prhheW1izahKoq8u1zLvBB */

#ifndef typedef_m_cell
#define typedef_m_cell

typedef struct tag_prhheW1izahKoq8u1zLvBB m_cell;

#endif                                 /* typedef_m_cell */

#ifndef struct_tag_oqflo8tPmhJ6sxPFLZiJGH
#define struct_tag_oqflo8tPmhJ6sxPFLZiJGH

struct tag_oqflo8tPmhJ6sxPFLZiJGH
{
  b_cell_wrap _data;
};

#endif                                 /* struct_tag_oqflo8tPmhJ6sxPFLZiJGH */

#ifndef typedef_s_oqflo8tPmhJ6sxPFLZiJGH
#define typedef_s_oqflo8tPmhJ6sxPFLZiJGH

typedef struct tag_oqflo8tPmhJ6sxPFLZiJGH s_oqflo8tPmhJ6sxPFLZiJGH;

#endif                                 /* typedef_s_oqflo8tPmhJ6sxPFLZiJGH */

#ifndef struct_tag_w3m1Q26ivrDTAtgc0mcqVE
#define struct_tag_w3m1Q26ivrDTAtgc0mcqVE

struct tag_w3m1Q26ivrDTAtgc0mcqVE
{
  s_FDrX8kOEjZXLXru8nW4swE _data;
};

#endif                                 /* struct_tag_w3m1Q26ivrDTAtgc0mcqVE */

#ifndef typedef_s_w3m1Q26ivrDTAtgc0mcqVE
#define typedef_s_w3m1Q26ivrDTAtgc0mcqVE

typedef struct tag_w3m1Q26ivrDTAtgc0mcqVE s_w3m1Q26ivrDTAtgc0mcqVE;

#endif                                 /* typedef_s_w3m1Q26ivrDTAtgc0mcqVE */

#ifndef struct_tag_jF8yfnx64YcYzndD1k3xcF
#define struct_tag_jF8yfnx64YcYzndD1k3xcF

struct tag_jF8yfnx64YcYzndD1k3xcF
{
  cell _data;
};

#endif                                 /* struct_tag_jF8yfnx64YcYzndD1k3xcF */

#ifndef typedef_s_jF8yfnx64YcYzndD1k3xcF
#define typedef_s_jF8yfnx64YcYzndD1k3xcF

typedef struct tag_jF8yfnx64YcYzndD1k3xcF s_jF8yfnx64YcYzndD1k3xcF;

#endif                                 /* typedef_s_jF8yfnx64YcYzndD1k3xcF */

#ifndef struct_tag_TnEayzHWuHj1hMPKnEr7h
#define struct_tag_TnEayzHWuHj1hMPKnEr7h

struct tag_TnEayzHWuHj1hMPKnEr7h
{
  b_cell _data;
};

#endif                                 /* struct_tag_TnEayzHWuHj1hMPKnEr7h */

#ifndef typedef_s_TnEayzHWuHj1hMPKnEr7h
#define typedef_s_TnEayzHWuHj1hMPKnEr7h

typedef struct tag_TnEayzHWuHj1hMPKnEr7h s_TnEayzHWuHj1hMPKnEr7h;

#endif                                 /* typedef_s_TnEayzHWuHj1hMPKnEr7h */

#ifndef struct_tag_lnEOVMt12CNg5nSw1iwvNF
#define struct_tag_lnEOVMt12CNg5nSw1iwvNF

struct tag_lnEOVMt12CNg5nSw1iwvNF
{
  c_cell_wrap _data;
};

#endif                                 /* struct_tag_lnEOVMt12CNg5nSw1iwvNF */

#ifndef typedef_s_lnEOVMt12CNg5nSw1iwvNF
#define typedef_s_lnEOVMt12CNg5nSw1iwvNF

typedef struct tag_lnEOVMt12CNg5nSw1iwvNF s_lnEOVMt12CNg5nSw1iwvNF;

#endif                                 /* typedef_s_lnEOVMt12CNg5nSw1iwvNF */

#ifndef struct_tag_rLqvsRnn1YgNlP4UZHEHjG
#define struct_tag_rLqvsRnn1YgNlP4UZHEHjG

struct tag_rLqvsRnn1YgNlP4UZHEHjG
{
  c_cell _data;
};

#endif                                 /* struct_tag_rLqvsRnn1YgNlP4UZHEHjG */

#ifndef typedef_s_rLqvsRnn1YgNlP4UZHEHjG
#define typedef_s_rLqvsRnn1YgNlP4UZHEHjG

typedef struct tag_rLqvsRnn1YgNlP4UZHEHjG s_rLqvsRnn1YgNlP4UZHEHjG;

#endif                                 /* typedef_s_rLqvsRnn1YgNlP4UZHEHjG */

#ifndef struct_tag_HNEgOhGwwuu4IndkThqyM
#define struct_tag_HNEgOhGwwuu4IndkThqyM

struct tag_HNEgOhGwwuu4IndkThqyM
{
  d_cell _data;
};

#endif                                 /* struct_tag_HNEgOhGwwuu4IndkThqyM */

#ifndef typedef_s_HNEgOhGwwuu4IndkThqyM
#define typedef_s_HNEgOhGwwuu4IndkThqyM

typedef struct tag_HNEgOhGwwuu4IndkThqyM s_HNEgOhGwwuu4IndkThqyM;

#endif                                 /* typedef_s_HNEgOhGwwuu4IndkThqyM */

#ifndef struct_tag_HOps0FrfA6RiWumqewPwZD
#define struct_tag_HOps0FrfA6RiWumqewPwZD

struct tag_HOps0FrfA6RiWumqewPwZD
{
  d_cell_wrap _data;
};

#endif                                 /* struct_tag_HOps0FrfA6RiWumqewPwZD */

#ifndef typedef_s_HOps0FrfA6RiWumqewPwZD
#define typedef_s_HOps0FrfA6RiWumqewPwZD

typedef struct tag_HOps0FrfA6RiWumqewPwZD s_HOps0FrfA6RiWumqewPwZD;

#endif                                 /* typedef_s_HOps0FrfA6RiWumqewPwZD */

#ifndef struct_tag_1nlLkVeIuST25DF6il3ApD
#define struct_tag_1nlLkVeIuST25DF6il3ApD

struct tag_1nlLkVeIuST25DF6il3ApD
{
  e_cell_wrap _data;
};

#endif                                 /* struct_tag_1nlLkVeIuST25DF6il3ApD */

#ifndef typedef_s_1nlLkVeIuST25DF6il3ApD
#define typedef_s_1nlLkVeIuST25DF6il3ApD

typedef struct tag_1nlLkVeIuST25DF6il3ApD s_1nlLkVeIuST25DF6il3ApD;

#endif                                 /* typedef_s_1nlLkVeIuST25DF6il3ApD */

#ifndef struct_tag_uzuPWHtc1cM7ZRTfbsKeiF
#define struct_tag_uzuPWHtc1cM7ZRTfbsKeiF

struct tag_uzuPWHtc1cM7ZRTfbsKeiF
{
  e_cell _data;
};

#endif                                 /* struct_tag_uzuPWHtc1cM7ZRTfbsKeiF */

#ifndef typedef_s_uzuPWHtc1cM7ZRTfbsKeiF
#define typedef_s_uzuPWHtc1cM7ZRTfbsKeiF

typedef struct tag_uzuPWHtc1cM7ZRTfbsKeiF s_uzuPWHtc1cM7ZRTfbsKeiF;

#endif                                 /* typedef_s_uzuPWHtc1cM7ZRTfbsKeiF */

#ifndef struct_tag_vJoXrDcoSCQr3YoFEfABTC
#define struct_tag_vJoXrDcoSCQr3YoFEfABTC

struct tag_vJoXrDcoSCQr3YoFEfABTC
{
  f_cell _data;
};

#endif                                 /* struct_tag_vJoXrDcoSCQr3YoFEfABTC */

#ifndef typedef_s_vJoXrDcoSCQr3YoFEfABTC
#define typedef_s_vJoXrDcoSCQr3YoFEfABTC

typedef struct tag_vJoXrDcoSCQr3YoFEfABTC s_vJoXrDcoSCQr3YoFEfABTC;

#endif                                 /* typedef_s_vJoXrDcoSCQr3YoFEfABTC */

#ifndef struct_tag_N0Y1KXrNIrGvo58waU4ZgD
#define struct_tag_N0Y1KXrNIrGvo58waU4ZgD

struct tag_N0Y1KXrNIrGvo58waU4ZgD
{
  g_cell _data;
};

#endif                                 /* struct_tag_N0Y1KXrNIrGvo58waU4ZgD */

#ifndef typedef_s_N0Y1KXrNIrGvo58waU4ZgD
#define typedef_s_N0Y1KXrNIrGvo58waU4ZgD

typedef struct tag_N0Y1KXrNIrGvo58waU4ZgD s_N0Y1KXrNIrGvo58waU4ZgD;

#endif                                 /* typedef_s_N0Y1KXrNIrGvo58waU4ZgD */

#ifndef struct_tag_JoNCLGYPkx325zGyYrXweC
#define struct_tag_JoNCLGYPkx325zGyYrXweC

struct tag_JoNCLGYPkx325zGyYrXweC
{
  h_cell _data;
};

#endif                                 /* struct_tag_JoNCLGYPkx325zGyYrXweC */

#ifndef typedef_s_JoNCLGYPkx325zGyYrXweC
#define typedef_s_JoNCLGYPkx325zGyYrXweC

typedef struct tag_JoNCLGYPkx325zGyYrXweC s_JoNCLGYPkx325zGyYrXweC;

#endif                                 /* typedef_s_JoNCLGYPkx325zGyYrXweC */

#ifndef struct_tag_A1UJhybpsZZOyeMkesgomF
#define struct_tag_A1UJhybpsZZOyeMkesgomF

struct tag_A1UJhybpsZZOyeMkesgomF
{
  i_cell _data;
};

#endif                                 /* struct_tag_A1UJhybpsZZOyeMkesgomF */

#ifndef typedef_s_A1UJhybpsZZOyeMkesgomF
#define typedef_s_A1UJhybpsZZOyeMkesgomF

typedef struct tag_A1UJhybpsZZOyeMkesgomF s_A1UJhybpsZZOyeMkesgomF;

#endif                                 /* typedef_s_A1UJhybpsZZOyeMkesgomF */

#ifndef struct_tag_FWimxzQUPShONB7Quya0ZC
#define struct_tag_FWimxzQUPShONB7Quya0ZC

struct tag_FWimxzQUPShONB7Quya0ZC
{
  j_cell _data;
};

#endif                                 /* struct_tag_FWimxzQUPShONB7Quya0ZC */

#ifndef typedef_s_FWimxzQUPShONB7Quya0ZC
#define typedef_s_FWimxzQUPShONB7Quya0ZC

typedef struct tag_FWimxzQUPShONB7Quya0ZC s_FWimxzQUPShONB7Quya0ZC;

#endif                                 /* typedef_s_FWimxzQUPShONB7Quya0ZC */

#ifndef struct_tag_hbjLv8oAAufqd63nhohC0C
#define struct_tag_hbjLv8oAAufqd63nhohC0C

struct tag_hbjLv8oAAufqd63nhohC0C
{
  k_cell _data;
};

#endif                                 /* struct_tag_hbjLv8oAAufqd63nhohC0C */

#ifndef typedef_s_hbjLv8oAAufqd63nhohC0C
#define typedef_s_hbjLv8oAAufqd63nhohC0C

typedef struct tag_hbjLv8oAAufqd63nhohC0C s_hbjLv8oAAufqd63nhohC0C;

#endif                                 /* typedef_s_hbjLv8oAAufqd63nhohC0C */

#ifndef struct_tag_WwbeP9epydSLZcfpMDIPXD
#define struct_tag_WwbeP9epydSLZcfpMDIPXD

struct tag_WwbeP9epydSLZcfpMDIPXD
{
  k_cell _data;
};

#endif                                 /* struct_tag_WwbeP9epydSLZcfpMDIPXD */

#ifndef typedef_s_WwbeP9epydSLZcfpMDIPXD
#define typedef_s_WwbeP9epydSLZcfpMDIPXD

typedef struct tag_WwbeP9epydSLZcfpMDIPXD s_WwbeP9epydSLZcfpMDIPXD;

#endif                                 /* typedef_s_WwbeP9epydSLZcfpMDIPXD */

#ifndef struct_tag_rs0J7tUaO8r8RV5HCYwLTD
#define struct_tag_rs0J7tUaO8r8RV5HCYwLTD

struct tag_rs0J7tUaO8r8RV5HCYwLTD
{
  f_cell_wrap _data;
};

#endif                                 /* struct_tag_rs0J7tUaO8r8RV5HCYwLTD */

#ifndef typedef_s_rs0J7tUaO8r8RV5HCYwLTD
#define typedef_s_rs0J7tUaO8r8RV5HCYwLTD

typedef struct tag_rs0J7tUaO8r8RV5HCYwLTD s_rs0J7tUaO8r8RV5HCYwLTD;

#endif                                 /* typedef_s_rs0J7tUaO8r8RV5HCYwLTD */

#ifndef struct_tag_bQJBI3etomw0n0VQkjRSOH
#define struct_tag_bQJBI3etomw0n0VQkjRSOH

struct tag_bQJBI3etomw0n0VQkjRSOH
{
  s_SwJNGR5YkTTY74yds4y5FE _data;
};

#endif                                 /* struct_tag_bQJBI3etomw0n0VQkjRSOH */

#ifndef typedef_s_bQJBI3etomw0n0VQkjRSOH
#define typedef_s_bQJBI3etomw0n0VQkjRSOH

typedef struct tag_bQJBI3etomw0n0VQkjRSOH s_bQJBI3etomw0n0VQkjRSOH;

#endif                                 /* typedef_s_bQJBI3etomw0n0VQkjRSOH */

#ifndef struct_tag_sscO7wA3EvQplstWUSXjjC
#define struct_tag_sscO7wA3EvQplstWUSXjjC

struct tag_sscO7wA3EvQplstWUSXjjC
{
  l_cell _data;
};

#endif                                 /* struct_tag_sscO7wA3EvQplstWUSXjjC */

#ifndef typedef_s_sscO7wA3EvQplstWUSXjjC
#define typedef_s_sscO7wA3EvQplstWUSXjjC

typedef struct tag_sscO7wA3EvQplstWUSXjjC s_sscO7wA3EvQplstWUSXjjC;

#endif                                 /* typedef_s_sscO7wA3EvQplstWUSXjjC */

#ifndef struct_tag_NXnL3B3fZyWy942sIIFnoB
#define struct_tag_NXnL3B3fZyWy942sIIFnoB

struct tag_NXnL3B3fZyWy942sIIFnoB
{
  m_cell _data;
};

#endif                                 /* struct_tag_NXnL3B3fZyWy942sIIFnoB */

#ifndef typedef_s_NXnL3B3fZyWy942sIIFnoB
#define typedef_s_NXnL3B3fZyWy942sIIFnoB

typedef struct tag_NXnL3B3fZyWy942sIIFnoB s_NXnL3B3fZyWy942sIIFnoB;

#endif                                 /* typedef_s_NXnL3B3fZyWy942sIIFnoB */

#ifndef typedef_InstanceStruct_XnmIrDlggdYppmH1cMignF
#define typedef_InstanceStruct_XnmIrDlggdYppmH1cMignF

typedef struct {
  SimStruct *S;
  comm_FMBroadcastModulator sysobj;
  boolean_T sysobj_not_empty;
  boolean_T isInitialized;
  boolean_T b_isInitialized;
  boolean_T c_isInitialized;
  boolean_T d_isInitialized;
  real_T yOut[19200];
  void *emlrtRootTLSGlobal;
  real_T (*u0)[3840];
  creal_T (*b_y0)[19200];
} InstanceStruct_XnmIrDlggdYppmH1cMignF;

#endif                                 /* typedef_InstanceStruct_XnmIrDlggdYppmH1cMignF */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_XnmIrDlggdYppmH1cMignF(SimStruct *S, int_T method,
  void* data);

#endif
