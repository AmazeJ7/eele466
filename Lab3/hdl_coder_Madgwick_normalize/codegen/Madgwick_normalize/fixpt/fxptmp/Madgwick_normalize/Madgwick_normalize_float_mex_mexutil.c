/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Madgwick_normalize_float_mex_mexutil.c
 *
 * Code generation for function 'Madgwick_normalize_float_mex_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "Madgwick_normalize_float_mex_mexutil.h"

/* Function Definitions */
void emlrtInitVarDataTables(emlrtLocationLoggingDataType dataTables[17])
{
  int32_T i;
  for (i = 0; i < 17; i++) {
    dataTables[i].SimMin = rtInf;
    dataTables[i].SimMax = rtMinusInf;
    dataTables[i].OverflowWraps = 0;
    dataTables[i].Saturations = 0;
    dataTables[i].IsAlwaysInteger = true;
    dataTables[i].HistogramTable = (emlrtLocationLoggingHistogramType *)NULL;
  }
}

/* End of code generation (Madgwick_normalize_float_mex_mexutil.c) */
