/* Include files */

#include "fm_digitoad_cgxe.h"
#include "m_kPGGPxec16xB7x2RaVfN6C.h"

unsigned int cgxe_fm_digitoad_method_dispatcher(SimStruct* S, int_T method, void*
  data)
{
  if (ssGetChecksum0(S) == 811935496 &&
      ssGetChecksum1(S) == 4155459017 &&
      ssGetChecksum2(S) == 324873662 &&
      ssGetChecksum3(S) == 3288970672) {
    method_dispatcher_kPGGPxec16xB7x2RaVfN6C(S, method, data);
    return 1;
  }

  return 0;
}
