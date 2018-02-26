/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Madgwick_normalize.h
 *
 * Code generation for function 'Madgwick_normalize'
 *
 */

#ifndef MADGWICK_NORMALIZE_H
#define MADGWICK_NORMALIZE_H

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
extern void Madgwick_normalize(const emlrtStack *sp, real_T *ax, real_T *ay,
  real_T *az, real_T *a3);

#endif

/* End of code generation (Madgwick_normalize.h) */
