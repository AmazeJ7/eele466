/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Madgwick_normalize_float_mex_api.c
 *
 * Code generation for function '_coder_Madgwick_normalize_float_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "_coder_Madgwick_normalize_float_mex_api.h"
#include "Madgwick_normalize_float_mex_emxutil.h"
#include "Madgwick_normalize_float_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_Madgwick_normalize_float_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct0_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ax, const
  char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct1_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [264]);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct0_T *u)
{
  const mxArray *y;
  int32_T i6;
  int32_T iv1[2];
  static const char * sv0[7] = { "Class", "Dims", "Varsize", "NumericType",
    "Fimath", "Data", "DataSize" };

  int32_T i;
  int32_T b_j1;
  emxArray_uint8_T *b_u;
  int32_T u_size[2];
  int32_T b_u_size[2];
  int32_T loop_ub;
  const mxArray *b_y;
  char_T u_data[6];
  const mxArray *m2;
  real_T *pData;
  int32_T c_u_size[2];
  uint8_T *b_pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv1[i6] = u->size[i6];
  }

  emlrtAssign(&y, emlrtCreateStructArray(2, iv1, 7, sv0));
  emlrtCreateField(y, "Class");
  emlrtCreateField(y, "Dims");
  emlrtCreateField(y, "Varsize");
  emlrtCreateField(y, "NumericType");
  emlrtCreateField(y, "Fimath");
  emlrtCreateField(y, "Data");
  emlrtCreateField(y, "DataSize");
  i = 0;
  b_j1 = 0;
  emxInit_uint8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  if (0 < u->size[1U]) {
    u_size[0] = 1;
    b_u_size[0] = 1;
    b_u_size[1] = 2;
  }

  while (b_j1 < u->size[1U]) {
    u_size[1] = u->data[u->size[0] * b_j1].Class.size[1];
    loop_ub = u->data[u->size[0] * b_j1].Class.size[0] * u->data[u->size[0] *
      b_j1].Class.size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      u_data[i6] = u->data[u->size[0] * b_j1].Class.data[i6];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, u_size);
    emlrtInitCharArrayR2013a(sp, u->data[u->size[0] * b_j1].Class.size[1], m2,
      &u_data[0]);
    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "Class", b_y, 0);
    b_y = NULL;
    m2 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)emlrtMxGetPr(m2);
    i6 = 0;
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      pData[i6] = u->data[u->size[0] * b_j1].Dims.data[u->data[u->size[0] * b_j1]
        .Dims.size[0] * loop_ub];
      i6++;
    }

    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "Dims", b_y, 1);
    b_y = NULL;
    m2 = emlrtCreateLogicalScalar(u->data[u->size[0] * b_j1].Varsize);
    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "Varsize", b_y, 2);
    c_u_size[0] = 1;
    c_u_size[1] = 0;
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, c_u_size);
    emlrtInitCharArrayR2013a(sp, 0, m2, NULL);
    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "NumericType", b_y, 3);
    c_u_size[0] = 1;
    c_u_size[1] = 0;
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, c_u_size);
    emlrtInitCharArrayR2013a(sp, 0, m2, NULL);
    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "Fimath", b_y, 4);
    i6 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = 1;
    b_u->size[1] = u->data[u->size[0] * b_j1].Data->size[1];
    emxEnsureCapacity_uint8_T(sp, b_u, i6, (emlrtRTEInfo *)NULL);
    loop_ub = u->data[u->size[0] * b_j1].Data->size[0] * u->data[u->size[0] *
      b_j1].Data->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      b_u->data[i6] = u->data[u->size[0] * b_j1].Data->data[i6];
    }

    b_y = NULL;
    m2 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxUINT8_CLASS,
      mxREAL);
    b_pData = (uint8_T *)emlrtMxGetData(m2);
    i6 = 0;
    for (loop_ub = 0; loop_ub < u->data[u->size[0] * b_j1].Data->size[1];
         loop_ub++) {
      b_pData[i6] = u->data[u->size[0] * b_j1].Data->data[u->data[u->size[0] *
        b_j1].Data->size[0] * loop_ub];
      i6++;
    }

    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "Data", b_y, 5);
    b_y = NULL;
    m2 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)emlrtMxGetData(m2) = u->data[u->size[0] * b_j1].DataSize;
    emlrtAssign(&b_y, m2);
    emlrtSetFieldR2017b(y, i, "DataSize", b_y, 6);
    i++;
    b_j1++;
  }

  emxFree_uint8_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ax, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ax), &thisId);
  emlrtDestroyArray(&ax);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct1_T *u)
{
  const mxArray *y;
  int32_T i;
  int32_T iv2[2];
  static const char * sv1[2] = { "ActualIndex", "FieldNames" };

  int32_T u_size[2];
  int32_T b_j1;
  const mxArray *b_y;
  const mxArray *m3;
  y = NULL;
  for (i = 0; i < 2; i++) {
    iv2[i] = u->size[i];
  }

  emlrtAssign(&y, emlrtCreateStructArray(2, iv2, 2, sv1));
  emlrtCreateField(y, "ActualIndex");
  emlrtCreateField(y, "FieldNames");
  i = 0;
  if (0 < u->size[1U]) {
    u_size[0] = 1;
    u_size[1] = 0;
  }

  for (b_j1 = 0; b_j1 < u->size[1U]; b_j1++) {
    b_y = NULL;
    m3 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)emlrtMxGetData(m3) = u->data[u->size[0] * b_j1].ActualIndex;
    emlrtAssign(&b_y, m3);
    emlrtSetFieldR2017b(y, i, "ActualIndex", b_y, 0);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, u_size);
    emlrtInitCharArrayR2013a(sp, 0, m3, NULL);
    emlrtAssign(&b_y, m3);
    emlrtSetFieldR2017b(y, i, "FieldNames", b_y, 1);
    i++;
  }

  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [264])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv3[2] = { 1, 264 };

  y = NULL;
  m4 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 264, m4, &u[0]);
  emlrtAssign(&y, m4);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Madgwick_normalize_api(const mxArray * const prhs[4], const mxArray *plhs[4])
{
  real_T ax;
  real_T ay;
  real_T az;
  real_T a3;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  ax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ax");
  ay = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ay");
  az = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "az");
  a3 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "a3");

  /* Invoke the target function */
  Madgwick_normalize(&st, &ax, &ay, &az, &a3);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ax);
  plhs[1] = emlrt_marshallOut(ay);
  plhs[2] = emlrt_marshallOut(az);
  plhs[3] = emlrt_marshallOut(a3);
}

void customFetchLoggedData_api(const mxArray *plhs[4])
{
  emxArray_struct0_T *data;
  emxArray_struct1_T *dataInfo;
  char_T dataExprIdMapping[264];
  real_T numLoggedExpr;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_struct0_T(&st, &data, 2, &d_emlrtRTEI, true);
  emxInit_struct1_T(&st, &dataInfo, 2, &d_emlrtRTEI, true);

  /* Invoke the target function */
  customFetchLoggedData(&st, data, dataInfo, dataExprIdMapping, &numLoggedExpr);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, data);
  plhs[1] = c_emlrt_marshallOut(&st, dataInfo);
  plhs[2] = d_emlrt_marshallOut(&st, dataExprIdMapping);
  plhs[3] = emlrt_marshallOut(numLoggedExpr);
  emxFree_struct1_T(&dataInfo);
  emxFree_struct0_T(&data);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void forcePushIntoCloud_api(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  forcePushIntoCloud(&st);
}

void logStmts_api(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  logStmts(&st);
}

/* End of code generation (_coder_Madgwick_normalize_float_mex_api.c) */
