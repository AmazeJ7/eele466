/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Madgwick_normalize_float_mex_mex.c
 *
 * Code generation for function '_coder_Madgwick_normalize_float_mex_mex'
 *
 */

/* Include files */
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "_coder_Madgwick_normalize_float_mex_mex.h"
#include "Madgwick_normalize_float_mex_terminate.h"
#include "_coder_Madgwick_normalize_float_mex_api.h"
#include "Madgwick_normalize_float_mex_initialize.h"
#include "Madgwick_normalize_float_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[4] = { "Madgwick_normalize", "logStmts",
  "customFetchLoggedData", "forcePushIntoCloud" };

/* Function Declarations */
static void Madgwick_normalize_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4]);
static void c_customFetchLoggedData_mexFunc(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs);
static void forcePushIntoCloud_mexFunction(int32_T nlhs, int32_T nrhs);
static void logStmts_mexFunction(int32_T nlhs, int32_T nrhs);

/* Function Definitions */
static void Madgwick_normalize_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4])
{
  int32_T n;
  const mxArray *inputs[4];
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        18, "Madgwick_normalize");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "Madgwick_normalize");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Madgwick_normalize_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Madgwick_normalize_float_mex_terminate();
}

static void c_customFetchLoggedData_mexFunc(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs)
{
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        21, "customFetchLoggedData");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "customFetchLoggedData");
  }

  /* Call the function. */
  customFetchLoggedData_api(outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Madgwick_normalize_float_mex_terminate();
}

static void forcePushIntoCloud_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        18, "forcePushIntoCloud");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "forcePushIntoCloud");
  }

  /* Call the function. */
  forcePushIntoCloud_api();

  /* Module termination. */
  Madgwick_normalize_float_mex_terminate();
}

static void logStmts_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4, 8,
                        "logStmts");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "logStmts");
  }

  /* Call the function. */
  logStmts_api();

  /* Module termination. */
  Madgwick_normalize_float_mex_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(Madgwick_normalize_float_mex_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Madgwick_normalize_float_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 4)) {
   case 0:
    Madgwick_normalize_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 1:
    logStmts_mexFunction(nlhs, nrhs - 1);
    break;

   case 2:
    c_customFetchLoggedData_mexFunc(nlhs, plhs, nrhs - 1);
    break;

   case 3:
    forcePushIntoCloud_mexFunction(nlhs, nrhs - 1);
    break;
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Madgwick_normalize_float_mex_mex.c) */
