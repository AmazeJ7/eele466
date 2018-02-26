/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Madgwick_normalize_float_mex_types.h
 *
 * Code generation for function 'Madgwick_normalize'
 *
 */

#ifndef MADGWICK_NORMALIZE_FLOAT_MEX_TYPES_H
#define MADGWICK_NORMALIZE_FLOAT_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0

struct emxArray_char_T_1x0
{
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x0*/

#ifndef typedef_emxArray_char_T_1x0
#define typedef_emxArray_char_T_1x0

typedef struct emxArray_char_T_1x0 emxArray_char_T_1x0;

#endif                                 /*typedef_emxArray_char_T_1x0*/

#ifndef struct_emxArray_char_T_1x6
#define struct_emxArray_char_T_1x6

struct emxArray_char_T_1x6
{
  char_T data[6];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x6*/

#ifndef typedef_emxArray_char_T_1x6
#define typedef_emxArray_char_T_1x6

typedef struct emxArray_char_T_1x6 emxArray_char_T_1x6;

#endif                                 /*typedef_emxArray_char_T_1x6*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_real_T_1x2
#define struct_emxArray_real_T_1x2

struct emxArray_real_T_1x2
{
  real_T data[2];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_1x2*/

#ifndef typedef_emxArray_real_T_1x2
#define typedef_emxArray_real_T_1x2

typedef struct emxArray_real_T_1x2 emxArray_real_T_1x2;

#endif                                 /*typedef_emxArray_real_T_1x2*/

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

#ifndef struct_sB0lCpa1lgwMc300bnPpKIB
#define struct_sB0lCpa1lgwMc300bnPpKIB

struct sB0lCpa1lgwMc300bnPpKIB
{
  emxArray_char_T_1x6 Class;
  emxArray_real_T_1x2 Dims;
  boolean_T Varsize;
  emxArray_char_T_1x0 NumericType;
  emxArray_char_T_1x0 Fimath;
  emxArray_uint8_T *Data;
  uint32_T DataSize;
};

#endif                                 /*struct_sB0lCpa1lgwMc300bnPpKIB*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct sB0lCpa1lgwMc300bnPpKIB struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef struct_c_emxArray_sB0lCpa1lgwMc300bnPp
#define struct_c_emxArray_sB0lCpa1lgwMc300bnPp

struct c_emxArray_sB0lCpa1lgwMc300bnPp
{
  struct0_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_c_emxArray_sB0lCpa1lgwMc300bnPp*/

#ifndef typedef_emxArray_struct0_T
#define typedef_emxArray_struct0_T

typedef struct c_emxArray_sB0lCpa1lgwMc300bnPp emxArray_struct0_T;

#endif                                 /*typedef_emxArray_struct0_T*/

#ifndef struct_sDWCFBhsTPCwGOWAzJfCKUG
#define struct_sDWCFBhsTPCwGOWAzJfCKUG

struct sDWCFBhsTPCwGOWAzJfCKUG
{
  uint32_T ActualIndex;
  emxArray_char_T_1x0 FieldNames;
};

#endif                                 /*struct_sDWCFBhsTPCwGOWAzJfCKUG*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct sDWCFBhsTPCwGOWAzJfCKUG struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef struct_c_emxArray_sDWCFBhsTPCwGOWAzJfC
#define struct_c_emxArray_sDWCFBhsTPCwGOWAzJfC

struct c_emxArray_sDWCFBhsTPCwGOWAzJfC
{
  struct1_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_c_emxArray_sDWCFBhsTPCwGOWAzJfC*/

#ifndef typedef_emxArray_struct1_T
#define typedef_emxArray_struct1_T

typedef struct c_emxArray_sDWCFBhsTPCwGOWAzJfC emxArray_struct1_T;

#endif                                 /*typedef_emxArray_struct1_T*/
#endif

/* End of code generation (Madgwick_normalize_float_mex_types.h) */
