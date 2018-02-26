/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Madgwick_normalize_float_mex_initialize.c
 *
 * Code generation for function 'Madgwick_normalize_float_mex_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "Madgwick_normalize_float_mex_initialize.h"
#include "custom_mex_logger.h"
#include "_coder_Madgwick_normalize_float_mex_mex.h"
#include "Madgwick_normalize_float_mex_data.h"

/* Function Declarations */
static void c_Madgwick_normalize_float_mex_(const emlrtStack *sp);

/* Function Definitions */
static void c_Madgwick_normalize_float_mex_(const emlrtStack *sp)
{
  covrtInstanceData *t0_data = NULL;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtCoverageInstance.data = t0_data;
  pInit_not_empty_init();
  pBufferLen_not_empty_init();

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\Madgwick_normalize.m",
                  0U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "Madgwick_normalize", 0, -1, 305);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 205, -1, 299);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 101, -1, 178);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 180, 200, -1, 304);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\invSqrt.m",
                  1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "invSqrt", 0, -1, 78);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 43, -1, 73);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);
  st.site = NULL;
  indexMapper_init(&st);
  st.site = NULL;
  buffers_init(&st);
  st.site = NULL;
  customCoderEnableLog_init(&st);
}

void Madgwick_normalize_float_mex_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_Madgwick_normalize_float_mex_(&st);
  }
}

/* End of code generation (Madgwick_normalize_float_mex_initialize.c) */
