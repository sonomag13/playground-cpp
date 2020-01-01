#include <iostream>

using namespace std;

void applyThreshold(int [], int);

int main() {

    const int N = 10;
    int array[N] = {33, 2, 4, 6, 15, 7, 4, 25, 10, 14};
    for(int i=0; i<N; i++) {
        cout << array[i] << endl;
    }

    cout << "\n\narray is treated as a pointer" << endl;
    cout << "\tarray[0] = " << array[0] << endl;
    cout << "\tarray = " << &array << endl;
    cout << "\t&array[0] = " << &array[0] << endl;
    cout << "\t*array = " << *array << endl;

    cout << "\narray pointer arithmetic" << endl;
    cout << "\t*(array+2) = " << *(array+2) << endl;
    cout << "\t(array+2) = " << (array+2) << endl;
    cout << "\t&array[2] = " << &array[2] << endl;
    cout << "\tarray[2] = " << array[2] << endl;

    cout << "\nsize of an array" << endl;
    cout << "\tsizeof(array) = " << sizeof(array) << endl;
    cout << "\tsizeof(array[0]) = " << sizeof(array[0]) << endl;
    // int N = sizeof(array)/sizeof(array[0]);
    cout << "\tarray element = " << N << endl;

    cout << "\n\nmodify the array in the function" << endl;
    applyThreshold(array, N);
    for(int i=0; i<N; i++) {
        cout << array[i] << endl;
    }

    return 0;
}

void applyThreshold(int arr[], int N) {
    for(int i=0; i<N; i++) {
        if(*(arr+i) >= 10) {
            *(arr + i) = 0;
        }
    }
}