#include "tool.h"

int findMaxVal(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; ++i) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}