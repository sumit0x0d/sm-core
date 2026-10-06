#ifndef SM_TYPEDEF_H
#define SM_TYPEDEF_H

#include <stddef.h>

typedef unsigned char SM_UInt_8;
typedef signed char SM_Int_8;

typedef unsigned short SM_UInt_16;
typedef signed short SM_Int_16;

typedef unsigned int SM_UInt_32;
typedef signed int SM_Int_32;

typedef unsigned long SM_UInt_64;
typedef signed long SM_Int_64;

typedef float SM_Float;
typedef double SM_Double;

typedef enum {
     SM_BOOLEAN_FALSE = 0,
     SM_BOOLEAN_TRUE = 1
} SM_Boolean;

typedef enum {
     SM_COMPARE_LESS = -1,
     SM_COMPARE_EQUAL = 0,
     SM_COMPARE_GREATER = 1
} SM_Compare;

#endif
