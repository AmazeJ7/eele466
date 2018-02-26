/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Madgwick_normalize_float_mex_api.h
 *
 * Code generation for function '_coder_Madgwick_normalize_float_mex_api'
 *
 */

#ifndef _CODER_MADGWICK_NORMALIZE_FLOAT_MEX_API_H
#define _CODER_MADGWICK_NORMALIZE_FLOAT_MEX_API_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "Madgwick_normalize_float_mex_types.h"

/* Function Declarations */
extern void Madgwick_normalize_api(const mxArray * const prhs[4], const mxArray *
  plhs[4]);
extern void customFetchLoggedData_api(const mxArray *plhs[4]);
extern void forcePushIntoCloud_api(void);
extern void logStmts_api(void);

#endif

/* End of code generation (_coder_Madgwick_normalize_float_mex_api.h) */
