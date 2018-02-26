/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * assertValidSizeArg.c
 *
 * Code generation for function 'assertValidSizeArg'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "assertValidSizeArg.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 53,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 59,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

/* Function Definitions */
void assertValidSizeArg(const emlrtStack *sp, uint32_T varargin_2)
{
  uint32_T b_varargin_2;
  if (varargin_2 > 2147483647U) {
    emlrtErrorWithMessageIdR2012b(sp, &g_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }

  if (varargin_2 <= 0U) {
    b_varargin_2 = 0U;
  } else {
    b_varargin_2 = varargin_2;
  }

  if (!(2147483647U >= b_varargin_2)) {
    emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI, "Coder:MATLAB:pmaxsize", 0);
  }
}

/* End of code generation (assertValidSizeArg.c) */
