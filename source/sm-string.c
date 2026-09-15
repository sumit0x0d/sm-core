#include <stdlib.h>
#include <string.h>

#include <sm-string.h>

struct SM_String {
     unsigned char *data;
     size_t length;
};

SM_String *SM_String_Create(const char *data)
{
     SM_String *this;

     this = (SM_String *)malloc(sizeof(SM_String));
     if (!this) {
          return NULL;
     }

     this->data = (unsigned char *)malloc(sizeof (unsigned char) * strlen(data));

     return this;
}

void SM_String_Destroy(SM_String *this)
{
     free(this->data);
     free(this);
}
