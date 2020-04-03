#include <iostream>

using namespace std;

template <typename T>
int binarySearch(T [], int, T);

int main() {

    int arr[100], n, target, idxTarget;
    n = sizeof(arr) / sizeof(int);
    target = 300;
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }

    idxTarget = binarySearch(arr, n, target);

    cout << "target idx = " << idxTarget << endl;
    cout << "arr[idxTarget] = " << arr[idxTarget] << endl;

    return 0;

}

template <typename T>
int binarySearch(T arr[], int n, T target) {
    int l = 0, r = n -1, mid;
    while(l <= r) {
        mid = l + (r - l) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] > target) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}