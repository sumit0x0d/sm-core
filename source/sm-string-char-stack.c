#include <stdlib.h>
#include <string.h>

#include "sm-string-char-stack.h"

SM_StringCharStack *SM_StringCharStack_Create(size_t capacity)
{
     SM_StringCharStack *this;

     this = (SM_StringCharStack *)malloc(sizeof (SM_StringCharStack));
     if (!this) {
          return NULL;
     }

     this->base = malloc(capacity);
     if (!this->base) {
          free(this);
          return NULL;
     };

     this->size = 0;

     return this;
}

void SM_StringCharStack_Destroy(SM_StringCharStack *this)
{
     free(this->base);
     free(this);
}

SM_StringCharStackBool SM_StringCharStack_IsEmpty(SM_StringCharStack *this)
{
     if (this->size) {
          return SM_STRING_CHAR_STACK_BOOL_TRUE;
     }

     return SM_STRING_CHAR_STACK_BOOL_FALSE;
}

SM_StringCharStackBool SM_StringCharStack_IsFull(SM_StringCharStack *this)
{
     if (this->size == this->capacity) {
          return SM_STRING_CHAR_STACK_BOOL_TRUE;
     }

     return SM_STRING_CHAR_STACK_BOOL_FALSE;
}

char SM_StringCharStack_GetTop(SM_StringCharStack *this)
{
     return this->base[this->size - 1];
}

void SM_StringCharStack_Push(SM_StringCharStack *this, char data)
{
     this->base[this->size] = data;
     this->size++;
}

void SM_StringCharStack_Pop(SM_StringCharStack *this)
{
     this->size--;
}
