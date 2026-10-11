#include <stddef.h>

#ifndef SM_STRING_H
#define SM_STRING_H

#include <sm-api.h>
#include <sm-typedef.h>

typedef struct SM_String SM_String;

SM_API SM_String *SM_String_Create(const SM_Unsigned_8 *string);
SM_API void SM_String_Destroy(SM_String *this);

#endif
