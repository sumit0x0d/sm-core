#ifndef SM_TYPEDEF_H
#define SM_TYPEDEF_H

#include <stddef.h>

typedef unsigned char SM_UInt8;
typedef signed char SM_Int8;

typedef unsigned short SM_UInt16;
typedef signed short SM_Int16;

typedef unsigned int SM_UInt32;
typedef signed int SM_Int32;

typedef unsigned long SM_UInt64;
typedef signed long SM_Int64;

typedef float SM_Float;
typedef double SM_Double;

typedef enum {
     SM_BOOL_FALSE = 0,
     SM_BOOL_TRUE = 1
} SM_Bool;

typedef enum {
     SM_COMPARE_LESS = -1,
     SM_COMPARE_EQUAL = 0,
     SM_COMPARE_GREATER = 1
} SM_Compare;

#endif
