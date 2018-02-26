/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * custom_mex_logger.c
 *
 * Code generation for function 'custom_mex_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Madgwick_normalize.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "logStmts.h"
#include "custom_mex_logger.h"
#include "Madgwick_normalize_float_mex_emxutil.h"
#include "assertValidSizeArg.h"

/* Type Definitions */
#include <stddef.h>

/* Variable Definitions */
static emxArray_struct1_T *pIndexMap;
static boolean_T pIndexMap_not_empty;
static uint32_T pBufferLen;
static emxArray_struct0_T *pBuffers;
static boolean_T pBuffers_not_empty;
static boolean_T pInit_not_empty;
static emxArray_boolean_T *pEnabled;
static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "custom_mex_logger",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 12,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 18,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 37,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  4,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 159,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 83,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtDCInfo emlrtDCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo k_emlrtRSI = { 37,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_horzcat,
  const char_T *identifier, emxArray_boolean_T *y);
static const mxArray *f2fCustomCoderEnableLogState(const emlrtStack *sp,
  emlrtMCInfo *location);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv0[2] = { false, true };

  int32_T iv4[2];
  int32_T i7;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv0[0],
    iv4);
  i7 = ret->size[0] * ret->size[1];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  emxEnsureCapacity_boolean_T(sp, ret, i7, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_horzcat,
  const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_horzcat), &thisId, y);
  emlrtDestroyArray(&b_horzcat);
}

static const mxArray *f2fCustomCoderEnableLogState(const emlrtStack *sp,
  emlrtMCInfo *location)
{
  const mxArray *m5;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 0, NULL,
    "f2fCustomCoderEnableLogState", true, location);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 2, pArrays, "horzcat", true, location);
}

void b_custom_mex_logger(const emlrtStack *sp, emxArray_struct0_T *data,
  emxArray_struct1_T *bufferInfo)
{
  struct0_T S;
  int32_T i5;
  static const char_T valClass[5] = { 'u', 'i', 'n', 't', '8' };

  int32_T loop_ub;
  struct1_T b_S;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &g_emlrtRSI;
  emxInitStruct_struct0_T(&st, &S, &b_emlrtRTEI, true);
  if (!pBuffers_not_empty) {
    S.Class.size[0] = 1;
    S.Class.size[1] = 5;
    for (i5 = 0; i5 < 5; i5++) {
      S.Class.data[i5] = valClass[i5];
    }

    S.Dims.size[0] = 1;
    S.Dims.size[1] = 2;
    for (i5 = 0; i5 < 2; i5++) {
      S.Dims.data[i5] = 1.0;
    }

    S.Varsize = false;
    S.NumericType.size[0] = 1;
    S.NumericType.size[1] = 0;
    S.Fimath.size[0] = 1;
    S.Fimath.size[1] = 0;
    i5 = S.Data->size[0] * S.Data->size[1];
    S.Data->size[0] = 1;
    S.Data->size[1] = 1;
    emxEnsureCapacity_uint8_T(&st, S.Data, i5, &b_emlrtRTEI);
    S.Data->data[0] = 0;
    S.DataSize = 1U;
    i5 = pBuffers->size[0] * pBuffers->size[1];
    pBuffers->size[0] = 1;
    pBuffers->size[1] = 1;
    emxEnsureCapacity_struct0_T(&st, pBuffers, i5, &b_emlrtRTEI);
    emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &S, &b_emlrtRTEI);
    pBuffers_not_empty = true;
  }

  i5 = data->size[0] * data->size[1];
  data->size[0] = 1;
  data->size[1] = pBuffers->size[1];
  emxEnsureCapacity_struct0_T(&st, data, i5, &b_emlrtRTEI);
  loop_ub = pBuffers->size[0] * pBuffers->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    emxCopyStruct_struct0_T(&st, &data->data[i5], &pBuffers->data[i5],
      &b_emlrtRTEI);
  }

  emxCopyStruct_struct0_T(&st, &S, &pBuffers->data[0], &b_emlrtRTEI);
  i5 = pBuffers->size[0] * pBuffers->size[1];
  pBuffers->size[0] = 1;
  pBuffers->size[1] = 1;
  emxEnsureCapacity_struct0_T(&st, pBuffers, i5, &b_emlrtRTEI);
  emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &S, &b_emlrtRTEI);
  pBuffers_not_empty = true;
  st.site = &g_emlrtRSI;
  emxFreeStruct_struct0_T(&S);
  if (!pIndexMap_not_empty) {
    b_S.ActualIndex = 0U;
    b_S.FieldNames.size[0] = 1;
    b_S.FieldNames.size[1] = 0;
    i5 = pIndexMap->size[0] * pIndexMap->size[1];
    pIndexMap->size[0] = 1;
    pIndexMap->size[1] = 1;
    emxEnsureCapacity_struct1_T(&st, pIndexMap, i5, &b_emlrtRTEI);
    pIndexMap->data[0] = b_S;
    pIndexMap_not_empty = true;
    pBufferLen = 1U;
  }

  i5 = bufferInfo->size[0] * bufferInfo->size[1];
  bufferInfo->size[0] = 1;
  bufferInfo->size[1] = pIndexMap->size[1];
  emxEnsureCapacity_struct1_T(&st, bufferInfo, i5, &b_emlrtRTEI);
  loop_ub = pIndexMap->size[0] * pIndexMap->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    bufferInfo->data[i5] = pIndexMap->data[i5];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void buffers_free(void)
{
  emxFree_struct0_T(&pBuffers);
}

void buffers_init(const emlrtStack *sp)
{
  emxInit_struct0_T(sp, &pBuffers, 2, &emlrtRTEI, false);
  pBuffers_not_empty = false;
}

void customCoderEnableLog_free(void)
{
  emxFree_boolean_T(&pEnabled);
}

void customCoderEnableLog_init(const emlrtStack *sp)
{
  emxInit_boolean_T(sp, &pEnabled, 2, &emlrtRTEI, false);
}

void custom_mex_logger(const emlrtStack *sp, uint32_T idx_in, real_T val_in)
{
  emxArray_boolean_T *x;
  int32_T i0;
  boolean_T p;
  int32_T nxin;
  const mxArray *y;
  struct1_T S;
  const mxArray *m0;
  struct1_T b_S;
  uint32_T v;
  int32_T loop_ub;
  emxArray_struct1_T *hoistedGlobal;
  struct0_T c_S;
  uint32_T varargin_2;
  static const char_T valClass[5] = { 'u', 'i', 'n', 't', '8' };

  real_T d0;
  emxArray_int8_T *arg_Data;
  char_T arg_Class_data[6];
  static const char_T b_valClass[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

  uint8_T b_y[8];
  static const int32_T iv0[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  struct0_T d_S;
  struct0_T e_S;
  emxArray_struct0_T *b_hoistedGlobal;
  struct0_T expl_temp;
  uint32_T size;
  real_T varargin_1;
  emxArray_uint8_T *r0;
  uint32_T b_varargin_1;
  int32_T i1;
  emxArray_int32_T *r1;
  int32_T i2;
  int32_T unnamed_idx_1;
  int32_T i3;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &g_emlrtRSI;
  if (!pInit_not_empty) {
    emxInit_boolean_T(&st, &x, 2, &b_emlrtRTEI, true);
    pInit_not_empty = true;
    i0 = pEnabled->size[0] * pEnabled->size[1];
    pEnabled->size[0] = 1;
    pEnabled->size[1] = 1;
    emxEnsureCapacity_boolean_T(&st, pEnabled, i0, &b_emlrtRTEI);
    pEnabled->data[0] = false;
    y = NULL;
    m0 = emlrtCreateLogicalArray(2, *(int32_T (*)[2])pEnabled->size);
    emlrtInitLogicalArray(pEnabled->size[1], m0, pEnabled->data);
    emlrtAssign(&y, m0);
    b_st.site = &g_emlrtRSI;
    emlrt_marshallIn(&st, horzcat(&b_st, y, f2fCustomCoderEnableLogState(&b_st,
      &emlrtMCI), &emlrtMCI), "horzcat", pEnabled);
    b_st.site = &g_emlrtRSI;
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = pEnabled->size[1];
    emxEnsureCapacity_boolean_T(&b_st, x, i0, &b_emlrtRTEI);
    loop_ub = pEnabled->size[0] * pEnabled->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      x->data[i0] = pEnabled->data[i0];
    }

    c_st.site = &h_emlrtRSI;
    p = true;
    if (1 > pEnabled->size[1]) {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2012b(&c_st, &f_emlrtRTEI,
        "MATLAB:subsdeldimmismatch", 0);
    }

    nxin = x->size[1] - 1;
    for (loop_ub = 1; loop_ub <= nxin; loop_ub++) {
      x->data[loop_ub - 1] = x->data[loop_ub];
    }

    i0 = x->size[0] * x->size[1];
    if (1 > nxin) {
      x->size[1] = 0;
    } else {
      x->size[1] = nxin;
    }

    emxEnsureCapacity_boolean_T(&b_st, x, i0, &c_emlrtRTEI);
    i0 = pEnabled->size[0] * pEnabled->size[1];
    pEnabled->size[0] = 1;
    pEnabled->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&st, pEnabled, i0, &b_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      pEnabled->data[i0] = x->data[i0];
    }

    emxFree_boolean_T(&x);
  }

  if ((real_T)idx_in > pEnabled->size[1]) {
    p = false;
  } else {
    i0 = pEnabled->size[1];
    nxin = (int32_T)idx_in;
    if (!((nxin >= 1) && (nxin <= i0))) {
      emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
    }

    p = pEnabled->data[nxin - 1];
  }

  if (p) {
    st.site = &g_emlrtRSI;
    if (!pIndexMap_not_empty) {
      S.ActualIndex = 0U;
      S.FieldNames.size[0] = 1;
      S.FieldNames.size[1] = 0;
      i0 = pIndexMap->size[0] * pIndexMap->size[1];
      pIndexMap->size[0] = 1;
      pIndexMap->size[1] = 1;
      emxEnsureCapacity_struct1_T(&st, pIndexMap, i0, &b_emlrtRTEI);
      pIndexMap->data[0] = S;
      pIndexMap_not_empty = true;
      pBufferLen = 1U;
    }

    if ((real_T)idx_in > pIndexMap->size[1]) {
      p = false;
    } else {
      i0 = pIndexMap->size[1];
      nxin = (int32_T)idx_in;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
      }

      p = (pIndexMap->data[nxin - 1].ActualIndex != 0U);
    }

    if (!p) {
      st.site = &g_emlrtRSI;
      if (!pIndexMap_not_empty) {
        b_S.ActualIndex = 0U;
        b_S.FieldNames.size[0] = 1;
        b_S.FieldNames.size[1] = 0;
        i0 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = 1;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i0, &b_emlrtRTEI);
        pIndexMap->data[0] = b_S;
        pIndexMap_not_empty = true;
        pBufferLen = 1U;
      }

      v = pBufferLen + 1U;
      if (v < pBufferLen) {
        v = MAX_uint32_T;
      }

      if ((real_T)idx_in > pIndexMap->size[1]) {
        emxInit_struct1_T(&st, &hoistedGlobal, 2, &b_emlrtRTEI, true);
        i0 = hoistedGlobal->size[0] * hoistedGlobal->size[1];
        hoistedGlobal->size[0] = 1;
        hoistedGlobal->size[1] = pIndexMap->size[1];
        emxEnsureCapacity_struct1_T(&st, hoistedGlobal, i0, &b_emlrtRTEI);
        loop_ub = pIndexMap->size[0] * pIndexMap->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          hoistedGlobal->data[i0] = pIndexMap->data[i0];
        }

        b_st.site = &g_emlrtRSI;
        S = pIndexMap->data[0];
        d0 = (real_T)idx_in - (real_T)pIndexMap->size[1];
        if (d0 < 4.294967296E+9) {
          if (d0 >= 0.0) {
            varargin_2 = (uint32_T)d0;
          } else {
            varargin_2 = 0U;
          }
        } else {
          varargin_2 = MAX_uint32_T;
        }

        c_st.site = &i_emlrtRSI;
        assertValidSizeArg(&c_st, varargin_2);
        if ((int8_T)varargin_2 != (int32_T)varargin_2) {
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          emlrtInitCharArrayR2013a(&b_st, 15, m0, &u[0]);
          emlrtAssign(&y, m0);
          c_st.site = &k_emlrtRSI;
          b_error(&c_st, y, &b_emlrtMCI);
        }

        i0 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = hoistedGlobal->size[1] + (int8_T)varargin_2;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i0, &b_emlrtRTEI);
        loop_ub = hoistedGlobal->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          pIndexMap->data[pIndexMap->size[0] * i0] = hoistedGlobal->
            data[hoistedGlobal->size[0] * i0];
        }

        loop_ub = (int8_T)varargin_2;
        for (i0 = 0; i0 < loop_ub; i0++) {
          pIndexMap->data[pIndexMap->size[0] * (i0 + hoistedGlobal->size[1])] =
            S;
        }

        emxFree_struct1_T(&hoistedGlobal);
        pIndexMap_not_empty = true;
      }

      i0 = pIndexMap->size[1];
      nxin = (int32_T)idx_in;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
      }

      pIndexMap->data[nxin - 1].ActualIndex = v;
      varargin_2 = pBufferLen + 1U;
      if (varargin_2 < pBufferLen) {
        varargin_2 = MAX_uint32_T;
      }

      pBufferLen = varargin_2;
    } else {
      st.site = &g_emlrtRSI;
      if (!pIndexMap_not_empty) {
        b_S.ActualIndex = 0U;
        b_S.FieldNames.size[0] = 1;
        b_S.FieldNames.size[1] = 0;
        i0 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = 1;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i0, &b_emlrtRTEI);
        pIndexMap->data[0] = b_S;
        pIndexMap_not_empty = true;
        pBufferLen = 1U;
      }

      i0 = pIndexMap->size[1];
      nxin = (int32_T)idx_in;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
      }

      v = pIndexMap->data[nxin - 1].ActualIndex;
    }

    st.site = &g_emlrtRSI;
    emxInitStruct_struct0_T(&st, &c_S, &b_emlrtRTEI, true);
    if (!pBuffers_not_empty) {
      c_S.Class.size[0] = 1;
      c_S.Class.size[1] = 5;
      for (i0 = 0; i0 < 5; i0++) {
        c_S.Class.data[i0] = valClass[i0];
      }

      c_S.Dims.size[0] = 1;
      c_S.Dims.size[1] = 2;
      for (i0 = 0; i0 < 2; i0++) {
        c_S.Dims.data[i0] = 1.0;
      }

      c_S.Varsize = false;
      c_S.NumericType.size[0] = 1;
      c_S.NumericType.size[1] = 0;
      c_S.Fimath.size[0] = 1;
      c_S.Fimath.size[1] = 0;
      i0 = c_S.Data->size[0] * c_S.Data->size[1];
      c_S.Data->size[0] = 1;
      c_S.Data->size[1] = 1;
      emxEnsureCapacity_uint8_T(&st, c_S.Data, i0, &b_emlrtRTEI);
      c_S.Data->data[0] = 0;
      c_S.DataSize = 1U;
      i0 = pBuffers->size[0] * pBuffers->size[1];
      pBuffers->size[0] = 1;
      pBuffers->size[1] = 1;
      emxEnsureCapacity_struct0_T(&st, pBuffers, i0, &b_emlrtRTEI);
      emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &c_S, &b_emlrtRTEI);
      pBuffers_not_empty = true;
    }

    if ((real_T)v <= pBuffers->size[1]) {
      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
      }

      if (pBuffers->data[nxin - 1].DataSize > 1U) {
        p = true;
      } else {
        p = false;
      }
    } else {
      p = false;
    }

    if (!p) {
      for (i0 = 0; i0 < 6; i0++) {
        arg_Class_data[i0] = b_valClass[i0];
      }

      emxInit_int8_T(sp, &arg_Data, 2, &b_emlrtRTEI, true);
      i0 = arg_Data->size[0] * arg_Data->size[1];
      arg_Data->size[0] = 1;
      arg_Data->size[1] = 1;
      emxEnsureCapacity_int8_T(sp, arg_Data, i0, &b_emlrtRTEI);
      arg_Data->data[0] = 0;
      st.site = &g_emlrtRSI;
      if (!pBuffers_not_empty) {
        emxInitStruct_struct0_T(&st, &d_S, &b_emlrtRTEI, true);
        d_S.Class.size[0] = 1;
        d_S.Class.size[1] = 5;
        for (i0 = 0; i0 < 5; i0++) {
          d_S.Class.data[i0] = valClass[i0];
        }

        d_S.Dims.size[0] = 1;
        d_S.Dims.size[1] = 2;
        for (i0 = 0; i0 < 2; i0++) {
          d_S.Dims.data[i0] = 1.0;
        }

        d_S.Varsize = false;
        d_S.NumericType.size[0] = 1;
        d_S.NumericType.size[1] = 0;
        d_S.Fimath.size[0] = 1;
        d_S.Fimath.size[1] = 0;
        i0 = d_S.Data->size[0] * d_S.Data->size[1];
        d_S.Data->size[0] = 1;
        d_S.Data->size[1] = 1;
        emxEnsureCapacity_uint8_T(&st, d_S.Data, i0, &b_emlrtRTEI);
        d_S.Data->data[0] = 0;
        d_S.DataSize = 1U;
        i0 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = 1;
        emxEnsureCapacity_struct0_T(&st, pBuffers, i0, &b_emlrtRTEI);
        emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &d_S, &b_emlrtRTEI);
        pBuffers_not_empty = true;
        emxFreeStruct_struct0_T(&d_S);
      }

      if ((real_T)v > pBuffers->size[1]) {
        emxInit_struct0_T(&st, &b_hoistedGlobal, 2, &b_emlrtRTEI, true);
        i0 = b_hoistedGlobal->size[0] * b_hoistedGlobal->size[1];
        b_hoistedGlobal->size[0] = 1;
        b_hoistedGlobal->size[1] = pBuffers->size[1];
        emxEnsureCapacity_struct0_T(&st, b_hoistedGlobal, i0, &b_emlrtRTEI);
        loop_ub = pBuffers->size[0] * pBuffers->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          emxCopyStruct_struct0_T(&st, &b_hoistedGlobal->data[i0],
            &pBuffers->data[i0], &b_emlrtRTEI);
        }

        b_st.site = &g_emlrtRSI;
        emxCopyStruct_struct0_T(&b_st, &c_S, &pBuffers->data[0], &emlrtRTEI);
        d0 = (real_T)v - (real_T)pBuffers->size[1];
        if (d0 < 4.294967296E+9) {
          if (d0 >= 0.0) {
            varargin_2 = (uint32_T)d0;
          } else {
            varargin_2 = 0U;
          }
        } else {
          varargin_2 = MAX_uint32_T;
        }

        c_st.site = &i_emlrtRSI;
        assertValidSizeArg(&c_st, varargin_2);
        i0 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = b_hoistedGlobal->size[1] + (int32_T)varargin_2;
        emxEnsureCapacity_struct0_T(&st, pBuffers, i0, &b_emlrtRTEI);
        loop_ub = b_hoistedGlobal->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          emxCopyStruct_struct0_T(&st, &pBuffers->data[pBuffers->size[0] * i0],
            &b_hoistedGlobal->data[b_hoistedGlobal->size[0] * i0], &b_emlrtRTEI);
        }

        loop_ub = (int32_T)varargin_2;
        for (i0 = 0; i0 < loop_ub; i0++) {
          emxCopyStruct_struct0_T(&st, &pBuffers->data[pBuffers->size[0] * (i0 +
            b_hoistedGlobal->size[1])], &c_S, &b_emlrtRTEI);
        }

        emxFree_struct0_T(&b_hoistedGlobal);
        pBuffers_not_empty = true;
      }

      emxInitStruct_struct0_T(&st, &expl_temp, &emlrtRTEI, true);
      expl_temp.Class.size[0] = 1;
      expl_temp.Class.size[1] = 6;
      memcpy(&expl_temp.Class.data[0], &arg_Class_data[0], (uint32_T)(6 *
              (int32_T)sizeof(char_T)));
      expl_temp.Dims.size[0] = 1;
      expl_temp.Dims.size[1] = 2;
      for (i0 = 0; i0 < 2; i0++) {
        expl_temp.Dims.data[i0] = 1.0;
      }

      expl_temp.Varsize = false;
      expl_temp.NumericType.size[0] = 1;
      expl_temp.NumericType.size[1] = 0;
      expl_temp.Fimath.size[0] = 1;
      expl_temp.Fimath.size[1] = 0;
      i0 = expl_temp.Data->size[0] * expl_temp.Data->size[1];
      expl_temp.Data->size[0] = 1;
      expl_temp.Data->size[1] = arg_Data->size[1];
      emxEnsureCapacity_uint8_T(&st, expl_temp.Data, i0, &b_emlrtRTEI);
      loop_ub = arg_Data->size[0] * arg_Data->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        expl_temp.Data->data[i0] = (uint8_T)arg_Data->data[i0];
      }

      emxFree_int8_T(&arg_Data);
      expl_temp.DataSize = 1U;
      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &st);
      }

      emxCopyStruct_struct0_T(&st, &pBuffers->data[nxin - 1], &expl_temp,
        &emlrtRTEI);
      emxFreeStruct_struct0_T(&expl_temp);
    }

    emxFreeStruct_struct0_T(&c_S);
    st.site = &g_emlrtRSI;
    b_st.site = &g_emlrtRSI;
    memcpy((void *)&b_y[0], (void *)&val_in, (uint32_T)((size_t)8 * sizeof
            (uint8_T)));
    st.site = &g_emlrtRSI;
    if (v > 1U) {
      b_st.site = &g_emlrtRSI;
      if (!pBuffers_not_empty) {
        emxInitStruct_struct0_T(&b_st, &e_S, &b_emlrtRTEI, true);
        e_S.Class.size[0] = 1;
        e_S.Class.size[1] = 5;
        for (i0 = 0; i0 < 5; i0++) {
          e_S.Class.data[i0] = valClass[i0];
        }

        e_S.Dims.size[0] = 1;
        e_S.Dims.size[1] = 2;
        for (i0 = 0; i0 < 2; i0++) {
          e_S.Dims.data[i0] = 1.0;
        }

        e_S.Varsize = false;
        e_S.NumericType.size[0] = 1;
        e_S.NumericType.size[1] = 0;
        e_S.Fimath.size[0] = 1;
        e_S.Fimath.size[1] = 0;
        i0 = e_S.Data->size[0] * e_S.Data->size[1];
        e_S.Data->size[0] = 1;
        e_S.Data->size[1] = 1;
        emxEnsureCapacity_uint8_T(&b_st, e_S.Data, i0, &b_emlrtRTEI);
        e_S.Data->data[0] = 0;
        e_S.DataSize = 1U;
        i0 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = 1;
        emxEnsureCapacity_struct0_T(&b_st, pBuffers, i0, &b_emlrtRTEI);
        emxCopyStruct_struct0_T(&b_st, &pBuffers->data[0], &e_S, &b_emlrtRTEI);
        pBuffers_not_empty = true;
        emxFreeStruct_struct0_T(&e_S);
      }

      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &b_st);
      }

      size = pBuffers->data[nxin - 1].DataSize;
      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &b_st);
      }

      d0 = (real_T)pBuffers->data[(int32_T)v - 1].DataSize + 8.0;
      if (d0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)d0;
      } else {
        varargin_2 = MAX_uint32_T;
      }

      if ((real_T)varargin_2 > pBuffers->data[(int32_T)v - 1].Data->size[1]) {
        varargin_1 = (real_T)pBuffers->data[(int32_T)v - 1].Data->size[1] * 2.0;
        d0 = (real_T)pBuffers->data[(int32_T)v - 1].DataSize + 8.0;
        if (d0 < 4.294967296E+9) {
          varargin_2 = (uint32_T)d0;
        } else {
          varargin_2 = MAX_uint32_T;
        }

        emxInit_uint8_T(&b_st, &r0, 2, &b_emlrtRTEI, true);
        i0 = pBuffers->size[1];
        nxin = pBuffers->data[(int32_T)v - 1].Data->size[1];
        if (varargin_1 > varargin_2) {
          b_varargin_1 = (uint32_T)varargin_1;
        } else {
          b_varargin_1 = varargin_2;
        }

        d0 = (real_T)b_varargin_1 - (real_T)nxin;
        if (d0 < 4.294967296E+9) {
          if (d0 >= 0.0) {
            varargin_2 = (uint32_T)d0;
          } else {
            varargin_2 = 0U;
          }
        } else {
          varargin_2 = MAX_uint32_T;
        }

        if ((real_T)varargin_2 != (int32_T)varargin_2) {
          emlrtIntegerCheckR2012b(varargin_2, &emlrtDCI, &b_st);
        }

        unnamed_idx_1 = (int32_T)varargin_2;
        nxin = pBuffers->size[1];
        i1 = r0->size[0] * r0->size[1];
        r0->size[0] = 1;
        i2 = (int32_T)v;
        if (!((i2 >= 1) && (i2 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &emlrtBCI, &b_st);
        }

        r0->size[1] = pBuffers->data[i2 - 1].Data->size[1] + unnamed_idx_1;
        emxEnsureCapacity_uint8_T(&b_st, r0, i1, &b_emlrtRTEI);
        i1 = (int32_T)v;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, &b_st);
        }

        loop_ub = pBuffers->data[i1 - 1].Data->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)v;
          if (!((i2 >= 1) && (i2 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &emlrtBCI, &b_st);
          }

          i3 = (int32_T)v;
          if (!((i3 >= 1) && (i3 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i0, &emlrtBCI, &b_st);
          }

          r0->data[r0->size[0] * i1] = pBuffers->data[i2 - 1].Data->
            data[pBuffers->data[i3 - 1].Data->size[0] * i1];
        }

        for (i1 = 0; i1 < unnamed_idx_1; i1++) {
          i2 = (int32_T)v;
          if (!((i2 >= 1) && (i2 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &emlrtBCI, &b_st);
          }

          r0->data[r0->size[0] * (i1 + pBuffers->data[i2 - 1].Data->size[1])] =
            0;
        }

        i0 = (int32_T)v;
        if (!((i0 >= 1) && (i0 <= nxin))) {
          emlrtDynamicBoundsCheckR2012b(i0, 1, nxin, &emlrtBCI, &b_st);
        }

        i0 = pBuffers->data[(int32_T)v - 1].Data->size[0] * pBuffers->data
          [(int32_T)v - 1].Data->size[1];
        pBuffers->data[(int32_T)v - 1].Data->size[0] = 1;
        i1 = (int32_T)v;
        if (!((i1 >= 1) && (i1 <= nxin))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, nxin, &emlrtBCI, &b_st);
        }

        pBuffers->data[(int32_T)v - 1].Data->size[1] = r0->size[1];
        emxEnsureCapacity_uint8_T(&b_st, pBuffers->data[(int32_T)v - 1].Data, i0,
          &b_emlrtRTEI);
        loop_ub = r0->size[1];
        for (i0 = 0; i0 < loop_ub; i0++) {
          i1 = (int32_T)v;
          if (!((i1 >= 1) && (i1 <= nxin))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, nxin, &emlrtBCI, &b_st);
          }

          i2 = (int32_T)v;
          if (!((i2 >= 1) && (i2 <= nxin))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, nxin, &emlrtBCI, &b_st);
          }

          pBuffers->data[i1 - 1].Data->data[pBuffers->data[i2 - 1].Data->size[0]
            * i0] = r0->data[r0->size[0] * i0];
        }

        emxFree_uint8_T(&r0);
      }

      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &b_st);
      }

      i0 = nxin - 1;
      d0 = (real_T)size + 8.0;
      if (d0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)d0;
      } else {
        varargin_2 = MAX_uint32_T;
      }

      varargin_2--;
      if (size > varargin_2) {
        i1 = 1;
        nxin = 1;
      } else {
        nxin = pBuffers->data[(int32_T)v - 1].Data->size[1];
        i1 = (int32_T)size;
        if (!((i1 >= 1) && (i1 <= nxin))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, nxin, &emlrtBCI, &b_st);
        }

        nxin = pBuffers->data[(int32_T)v - 1].Data->size[1];
        i2 = (int32_T)varargin_2;
        if (!((i2 >= 1) && (i2 <= nxin))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, nxin, &emlrtBCI, &b_st);
        }

        nxin = i2 + 1;
      }

      emxInit_int32_T(&b_st, &r1, 2, &b_emlrtRTEI, true);
      i2 = nxin - i1;
      if (i2 != 8) {
        emlrtSubAssignSizeCheck1dR2017a(i2, 8, &emlrtECI, &b_st);
      }

      i2 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = nxin - i1;
      emxEnsureCapacity_int32_T(&b_st, r1, i2, &b_emlrtRTEI);
      loop_ub = nxin - i1;
      for (nxin = 0; nxin < loop_ub; nxin++) {
        r1->data[r1->size[0] * nxin] = (i1 + nxin) - 1;
      }

      loop_ub = r1->size[0] * r1->size[1];
      for (nxin = 0; nxin < loop_ub; nxin++) {
        pBuffers->data[i0].Data->data[r1->data[nxin]] = b_y[nxin];
      }

      emxFree_int32_T(&r1);
      i0 = pBuffers->size[1];
      nxin = (int32_T)v;
      if (!((nxin >= 1) && (nxin <= i0))) {
        emlrtDynamicBoundsCheckR2012b(nxin, 1, i0, &emlrtBCI, &b_st);
      }

      d0 = (real_T)size + 8.0;
      if (d0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)d0;
      } else {
        varargin_2 = MAX_uint32_T;
      }

      pBuffers->data[nxin - 1].DataSize = varargin_2;
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void indexMapper_free(void)
{
  emxFree_struct1_T(&pIndexMap);
}

void indexMapper_init(const emlrtStack *sp)
{
  emxInit_struct1_T(sp, &pIndexMap, 2, &emlrtRTEI, false);
  pIndexMap_not_empty = false;
}

void pBufferLen_not_empty_init(void)
{
}

void pInit_not_empty_init(void)
{
  pInit_not_empty = false;
}

/* End of code generation (custom_mex_logger.c) */
