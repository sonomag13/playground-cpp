#ifndef ARRAY_H
#define ARRAY_H

// Abstract Data Type
//
// This demonstrates information hiding (encapsulation) using C
// If the declaration of array_t or the internal structure were to change
// it would be unnecessary to recompile other modules, unless the API was also
// changed

// object of an incomplete type, why works with or without *?
typedef struct array_s *array_t;

// interface for the ADT
array_t *array_alloc(int size);
void array_free(array_t *arr);

void array_set(array_t *arr, int index, int value);

int *array_begin(array_t *arr);
int *array_end(array_t *arr);

void array_print(int *begin, int *end);

#endif