/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * customFetchLoggedData.c
 *
 * Code generation for function 'customFetchLoggedData'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "custom_mex_logger.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 1,   /* lineNo */
  "customFetchLoggedData",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\customFetchLoggedData.p"/* pathName */
};

/* Function Definitions */
void customFetchLoggedData(const emlrtStack *sp, emxArray_struct0_T *data,
  emxArray_struct1_T *dataInfo, char_T dataExprIdMapping[264], real_T
  *numLoggedExpr)
{
  int32_T i4;
  static const char_T cv0[264] = { 'M', 'a', 'd', 'g', 'w', 'i', 'c', 'k', '_',
    'n', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', ',', 'C', ':', '\\', '4', '6',
    '6', '\\', 'J', 'G', '\\', 'L', 'a', 'b', '3', '\\', 'h', 'd', 'l', '_', 'c',
    'o', 'd', 'e', 'r', '_', 'M', 'a', 'd', 'g', 'w', 'i', 'c', 'k', '_', 'n',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', '\\', 'M', 'a', 'd', 'g', 'w', 'i',
    'c', 'k', '_', 'n', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', '.', 'm', '$',
    '$', 'i', 'n', 'p', 'u', 't', 's', '$', '$', '<', '>', 'a', 'x', ',', '2',
    '<', '>', 'a', 'y', ',', '3', '<', '>', 'a', 'z', ',', '4', '<', '>', 'a',
    '3', ',', '5', '$', '$', 'o', 'u', 't', 'p', 'u', 't', 's', '$', '$', '<',
    '>', 'a', 'x', ',', '6', '<', '>', 'a', 'y', ',', '7', '<', '>', 'a', 'z',
    ',', '8', '<', '>', 'a', '3', ',', '9', ';', 'i', 'n', 'v', 'S', 'q', 'r',
    't', ',', 'C', ':', '\\', '4', '6', '6', '\\', 'J', 'G', '\\', 'L', 'a', 'b',
    '3', '\\', 'h', 'd', 'l', '_', 'c', 'o', 'd', 'e', 'r', '_', 'M', 'a', 'd',
    'g', 'w', 'i', 'c', 'k', '_', 'n', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e',
    '\\', 'i', 'n', 'v', 'S', 'q', 'r', 't', '.', 'm', '$', '$', 'i', 'n', 'p',
    'u', 't', 's', '$', '$', '<', '>', 'i', 'n', 'p', 'u', 't', 'A', 'r', 'g',
    '1', ',', '1', '0', '$', '$', 'o', 'u', 't', 'p', 'u', 't', 's', '$', '$',
    '<', '>', 'o', 'u', 't', 'p', 'u', 't', 'A', 'r', 'g', '1', ',', '1', '1' };

  real_T b_numLoggedExpr;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i4 = 0; i4 < 264; i4++) {
    dataExprIdMapping[i4] = cv0[i4];
  }

  st.site = &j_emlrtRSI;
  b_custom_mex_logger(&st, data, dataInfo);
  b_numLoggedExpr = (real_T)dataInfo->size[1] - 1.0;
  *numLoggedExpr = b_numLoggedExpr;
}

/* End of code generation (customFetchLoggedData.c) */
