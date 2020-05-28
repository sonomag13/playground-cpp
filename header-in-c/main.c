
#include "tool.h"
#include <stdio.h>

int main() {

    int n = 5;
    int arr[5] = {1, 8, 6, 3, 4};
    int maxVal = findMaxVal(arr, n);
    printf("\nthe max value is %d\n", maxVal);
    return 0;

}