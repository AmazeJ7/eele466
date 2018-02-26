/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logStmts.c
 *
 * Code generation for function 'logStmts'
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
static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "logStmts",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\logStmts.p"/* pathName */
};

/* Function Definitions */
void logStmts(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &f_emlrtRSI;
  custom_mex_logger(&st, 0U, 0.0);
}

/* End of code generation (logStmts.c) */
