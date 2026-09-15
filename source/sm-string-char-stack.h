#ifndef SM_STRING_CHAR_STACK_H
#define SM_STRING_CHAR_STACK_H

#include <stddef.h>

typedef struct SM_StringCharStack SM_StringCharStack;

struct SM_StringCharStack {
     char *base;
     size_t capacity;
     size_t size;
};

typedef enum {
     SM_STRING_CHAR_STACK_BOOL_FALSE = 0,
     SM_STRING_CHAR_STACK_BOOL_TRUE = 1
} SM_StringCharStackBool;

SM_StringCharStack *SM_StringCharStack_Create(size_t capacity);

void SM_StringCharStack_Destroy(SM_StringCharStack *this);

SM_StringCharStackBool SM_StringCharStack_IsEmpty(SM_StringCharStack *this);

SM_StringCharStackBool SM_StringCharStack_IsFull(SM_StringCharStack *this);

char  SM_StringCharStack_GetTop(SM_StringCharStack *this);

void SM_StringCharStack_Push(SM_StringCharStack *this, char data);

void SM_StringCharStack_Pop(SM_StringCharStack *this);

#endif
