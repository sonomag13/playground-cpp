#include <stdio.h>

// call back function
int callbackFunc(int num) {
    printf("input = %d", num);
    return num;
}

// calling function
int caller(int (*ptr)(int), int num) {
    return ptr(num);
}

int main() {

    int numIn = 3;
    int numOut = caller(callbackFunc, numIn);

    printf("\noutput = %d", numOut);

    return 0;
}
