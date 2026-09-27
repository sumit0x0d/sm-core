#ifndef SM_CALLBACK_H
#define SM_CALLBACK_H

#include <sm-typedef.h>

typedef struct {
     SM_Compare (*function)(const void *data1, const void *data2, void *user_data);
     void *user_data;
} SM_CallbackCompare;

typedef struct {
     void (*function)(const void *data, void *result_data, void *user_data);
     void *user_data;
} SM_CallbackUnary;

typedef struct {
     void (*function)(const void *data1, const void *data2, void *result_data, void *user_data);
     void *user_data;
} SM_CallbackBinary;

typedef struct {
     size_t (*function)(const void *data, size_t size, void *user_data);
     void *user_data;
} SM_CallbackHash;

#endif
