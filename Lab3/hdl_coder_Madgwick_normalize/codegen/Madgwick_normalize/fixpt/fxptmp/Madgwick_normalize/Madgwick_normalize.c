/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Madgwick_normalize.c
 *
 * Code generation for function 'Madgwick_normalize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "error.h"
#include "custom_mex_logger.h"
#include "Madgwick_normalize_float_mex_mexutil.h"
#include "Madgwick_normalize_float_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "Madgwick_normalize",                /* fcnName */
  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\Madgwick_normalize.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "Madgwick_normalize",                /* fcnName */
  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\Madgwick_normalize.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 2,   /* lineNo */
  "invSqrt",                           /* fcnName */
  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\invSqrt.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "invSqrt",                           /* fcnName */
  "C:\\466\\JG\\Lab3\\hdl_coder_Madgwick_normalize\\invSqrt.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

/* Function Declarations */
static real_T emlrt_update_log_1(real_T in, emlrtLocationLoggingDataType table[],
  int32_T b_index);

/* Function Definitions */
static real_T emlrt_update_log_1(real_T in, emlrtLocationLoggingDataType table[],
  int32_T b_index)
{
  emlrtLocationLoggingDataType *b_table;
  real_T localMin;
  real_T localMax;
  if (b_index >= 0) {
    b_table = (emlrtLocationLoggingDataType *)&table[b_index];
    localMin = b_table[0U].SimMin;
    localMax = b_table[0U].SimMax;

    /* Simulation Min-Max logging. */
    if (in < localMin) {
      localMin = in;
    }

    if (in > localMax) {
      localMax = in;
    }

    b_table[0U].SimMin = localMin;
    b_table[0U].SimMax = localMax;

    /* IsAlwaysInteger logging. */
    if (in != muDoubleScalarFloor(in)) {
      b_table[0U].IsAlwaysInteger = false;
    }
  }

  return in;
}

void Madgwick_normalize(const emlrtStack *sp, real_T *ax, real_T *ay, real_T *az,
  real_T *a3)
{
  real_T a_dotproduct;
  real_T recipNorm;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtInitVarDataTables(emlrtLocationLoggingDataTables);

  /* logging input variable 'ax' for function 'Madgwick_normalize' */
  emlrt_update_log_1(*ax, emlrtLocationLoggingDataTables, 0);

  /* logging input variable 'ay' for function 'Madgwick_normalize' */
  emlrt_update_log_1(*ay, emlrtLocationLoggingDataTables, 1);

  /* logging input variable 'az' for function 'Madgwick_normalize' */
  emlrt_update_log_1(*az, emlrtLocationLoggingDataTables, 2);

  /* logging input variable 'a3' for function 'Madgwick_normalize' */
  emlrt_update_log_1(*a3, emlrtLocationLoggingDataTables, 3);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 2U, *ax);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 3U, *ay);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 4U, *az);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 5U, *a3);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);

  /*  Normalise accelerometer measurement */
  a_dotproduct = emlrt_update_log_1(emlrt_update_log_1(emlrt_update_log_1(*ax * *
    ax, emlrtLocationLoggingDataTables, 6) + emlrt_update_log_1(*ay * *ay,
    emlrtLocationLoggingDataTables, 7), emlrtLocationLoggingDataTables, 5) +
    emlrt_update_log_1(*az * *az, emlrtLocationLoggingDataTables, 8),
    emlrtLocationLoggingDataTables, 4);
  st.site = &emlrtRSI;

  /* logging input variable 'inputArg1' for function 'invSqrt' */
  emlrt_update_log_1(a_dotproduct, emlrtLocationLoggingDataTables, 14);
  b_st.site = &d_emlrtRSI;
  custom_mex_logger(&b_st, 10U, a_dotproduct);
  covrtLogFcn(&emlrtCoverageInstance, 1U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 0U);
  b_st.site = &c_emlrtRSI;
  if (a_dotproduct < 0.0) {
    c_st.site = &e_emlrtRSI;
    d_st.site = &e_emlrtRSI;
    error(&d_st);
  }

  recipNorm = emlrt_update_log_1(muDoubleScalarSqrt(a_dotproduct),
    emlrtLocationLoggingDataTables, 16);
  recipNorm = emlrt_update_log_1(1.0 / recipNorm, emlrtLocationLoggingDataTables,
    15);
  b_st.site = &d_emlrtRSI;
  custom_mex_logger(&b_st, 11U, recipNorm);
  recipNorm = emlrt_update_log_1(recipNorm, emlrtLocationLoggingDataTables, 9);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, a_dotproduct != 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1U);
    *ax = emlrt_update_log_1(*ax * recipNorm, emlrtLocationLoggingDataTables, 10);
    *ay = emlrt_update_log_1(*ay * recipNorm, emlrtLocationLoggingDataTables, 11);
    *az = emlrt_update_log_1(*az * recipNorm, emlrtLocationLoggingDataTables, 12);
    *a3 = emlrt_update_log_1(*a3 * recipNorm, emlrtLocationLoggingDataTables, 13);
  }

  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 6U, *ax);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 7U, *ay);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 8U, *az);
  st.site = &b_emlrtRSI;
  custom_mex_logger(&st, 9U, *a3);
}

/* End of code generation (Madgwick_normalize.c) */
