#include <iostream>

class MyArray {

public:
/*
 Rule of 3: destructor, copy constructor and copy asignment
 */

MyArray() = default; 

MyArray(size_t size, int* arrc): _size(size) {
    _arrc = new int[_size]; 
    memcpy(_arrc, arrc, _size * sizeof(int)); 
}; 

// copy constructor
MyArray(const MyArray& other): _size(other._size){
    _arrc = new int[_size]; 
    memcpy(_arrc, other._arrc, _size * sizeof(int)); 
}

// destructor
~MyArray() {
    delete[] _arrc; 
    std::cout << "My array is destructed~!\n";
}

/* This is a naive copy signmentd, but it has several disadvantages:
    - we need to check for the self-assignment but it rarely occurs
    - memory delocation and allocation are costly

// copy assignment
MyArray& operator=(const MyArray& other) {
    if (this == &other) {
        return *this; 
    }
    _size = other._size;
    delete[] _arrc; // delocation
    _arrc = new int[_size]; // allocation
    memcpy(_arrc, other._arrc, _size * sizeof(int)); 
    return *this; 
}
*/

MyArray& operator=(MyArray other) {
    // Notice that the other is passed by value
    // We swap the values insides this and other    
    _swap(*this, other); 
    return *this; 

}

size_t getSize() const {
    return _size; 
}

int* getArray() const {
    return _arrc; 
}

private: 
int* _arrc{nullptr}; // array of integers
size_t _size{0}; // size of the array

void _swap(MyArray& arrc1, MyArray& arrc2) {
    std::swap(arrc1._size, arrc2._size); 
    std::swap(arrc1._arrc, arrc2._arrc); 
}

}; 