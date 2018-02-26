/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * custom_mex_logger.h
 *
 * Code generation for function 'custom_mex_logger'
 *
 */

#ifndef CUSTOM_MEX_LOGGER_H
#define CUSTOM_MEX_LOGGER_H

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

/* Type Definitions */
#include <stddef.h>

/* Function Declarations */
extern void b_custom_mex_logger(const emlrtStack *sp, emxArray_struct0_T *data,
  emxArray_struct1_T *bufferInfo);
extern void buffers_free(void);
extern void buffers_init(const emlrtStack *sp);
extern void customCoderEnableLog_free(void);
extern void customCoderEnableLog_init(const emlrtStack *sp);
extern void custom_mex_logger(const emlrtStack *sp, uint32_T idx_in, real_T
  val_in);
extern void indexMapper_free(void);
extern void indexMapper_init(const emlrtStack *sp);
extern void pBufferLen_not_empty_init(void);
extern void pInit_not_empty_init(void);

#endif

/* End of code generation (custom_mex_logger.h) */
