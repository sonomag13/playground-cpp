#include <stdio.h>
#include <stdlib.h>

// note the absence of array_api.h header
// the array.h is used only in adt.c which needs to know of the interface for
// the ADT this whole file can be a standalone implementation of the data type

// this file can, of course, have it's own header file with function protos
// and other junk, but the array_api.h can stays separate

// abstract data type implementation //
typedef struct array_s
{
  int m_size;
  int m_capacity;
  int * m_data; // actual array data
} array_t;

// memory management
array_t *array_alloc(int size)
{
  // memory for the return structure
  array_t* ret = malloc(sizeof(array_t));

  // size and capacity
  ret->m_size = ret->m_capacity = size;

  // array data allocation
  ret->m_data = malloc(ret->m_capacity * sizeof(int));

  return ret;
}

void array_free(array_t *arr)
{
  // free array data and struct itself
  free(arr->m_data);
  free(arr);
}

// manipulations
void array_set(array_t *arr, int index, int value)
{
  // set the size if requested index is bigger than we have
  if (index >= arr->m_size)
  {
    arr->m_size = index + 1;
  }

  // check the capacity
  if (arr->m_size >= arr->m_capacity)
  {
    int new_capacity = arr->m_capacity * 1.5; // why 1.5?

    if (new_capacity <= arr->m_size)
    {
      new_capacity = arr->m_size + 1;
    }

    // realloc more memory
    arr->m_data = realloc(arr->m_data, new_capacity * sizeof(int));
    arr->m_capacity = new_capacity;
  }

  // set the value
  arr->m_data[index] = value;
}

void array_print(int *begin, int *end)
{
  while (begin != end)
  {
    printf("%d ", *begin);
    begin++;
  }
}

// array status info
int *array_begin(const array_t *arr)
{
  return arr->m_data;
}

int *array_end(const array_t *arr)
{
  return arr->m_data + arr->m_size;
}

