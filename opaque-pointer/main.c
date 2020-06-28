#include <stdio.h>
#include <stdlib.h>

#include "array_api.h"

// abstract array data type types
// opaque pointer:
//        an ADT implementation hidden behind the interface that is abstract to
//        the client, making it easier to maintain, apply changes and improve
//        in this example the array_t data type provides a bunch of functins
//        for manipulating the array, these are accessed through the array.h
//        interface but the implementation stays hidded in array.c

int main(int argc, char const *argv[])
{
    // a solid structure can not be difined because the compiler doesn't know
    // how big the data type is since we didn't add any elements to it
    // array_t new_array;
    // 12:11: error: storage size of ‘new_array’ isn’t known

    // we can however define a pointer to such structure because a pointer is
    // always of a known size
    array_t *arr;

    // create a new abstract array with size 3
    arr = array_alloc(3);

    // set some values
    array_set(arr, 0, 1);
    array_set(arr, 1, 2);
    array_set(arr, 2, 4);

    // display the array
    array_print(array_begin(arr), array_end(arr));

    // cause the array to grow by setting new indecies
    array_set(arr, 3, 8);
    array_set(arr, 6, 64);

    // display the array, note the empty indecies at 4 and 5
    array_print(array_begin(arr), array_end(arr));

    // free up the array
    array_free(arr);

    return EXIT_SUCCESS;
}