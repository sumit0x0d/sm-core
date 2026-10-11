#include <stdlib.h>
#include <string.h>

#include <sm-string.h>

struct SM_String {
     SM_Unsigned_8 *data;
     size_t length;
};

SM_String *SM_String_Create(const SM_Unsigned_8 *data)
{
     SM_String *this;

     this = (SM_String *)malloc(sizeof(SM_String));
     if (!this) {
          return NULL;
     }

     this->length = strlen((const char *)data);
     this->data = (SM_Unsigned_8 *)malloc(sizeof (SM_Unsigned_8) * this->length);

     return this;
}

void SM_String_Destroy(SM_String *this)
{
     free(this->data);
     free(this);
}


