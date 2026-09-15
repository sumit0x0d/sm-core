#include <stddef.h>

#ifndef SM_STRING_H
#define SM_STRING_H

typedef struct SM_String SM_String;

SM_String *SM_String_Create(const char *string);
void SM_String_Destroy(SM_String *this);

#endif