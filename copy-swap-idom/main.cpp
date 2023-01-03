#include <iostream>

#include "MyArray.h"

std::ostream& operator<<(std::ostream&, const MyArray&);  // print out the

int main () {

    const size_t num{5}; 
    int arrc[num]; 
    for (size_t i = 0; i < num; ++i) {
        arrc[i] = static_cast<int>(i); 
    }

    // regular constructor
    MyArray myArray1 = MyArray(num, arrc);
    std::cout << myArray1; 

    // copy constructor
    MyArray myArray2 = MyArray(myArray1); 
    std::cout << myArray2; 

    // copy assignment
    MyArray myArray3;
    myArray3 = myArray2;
    std::cout << myArray3; 

    return 0; 
}

std::ostream& operator<<(std::ostream& os, const MyArray& myArray) {
    // overload << to print out the address of the MyArray object, size of the array and values of array
    size_t size{myArray.getSize()};
    int* arrc{myArray.getArray()};
    os << "Address of MyArray object = " << &myArray << '\n';
    os << "Address of arrc = " << arrc << " and values in arrc = "; 
    for (size_t i = 0; i < size; ++i) {
        os << *(arrc + i) << ' '; 
    }
    os << "\n\n"; 

    return os; 
}