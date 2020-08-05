#include <iostream>

using namespace std; 

void add(int&, int&, int&); 

int main() {


    int i = 0; 
    int n = 5; 

    cout << "using i++" << endl; 
    while (i < n) {
        cout << "\ti = " << i++ << endl; 
    }

    i = 0; 
    cout << "\nusing ++i" << endl; 
    while (i < n) {
        cout << "\ti = " << ++i << endl; 
    }

    cout << "\nsome strange operators" << endl; 
    cout << "a = 8" << endl; 
    int a = 8; 
    a <<= 1;
    cout << "\ta <<= 1: " << a << endl;  
    a = 8; 
    a >>= 1; 
    cout << "\ta >>= 1: " << a << endl;  
    a = 8; 
    a %= 3;     
    cout << "\ta %= 3: " << a << endl;  


    cout << "passing by reference" << endl; 
    a = 1; 
    cout << "\t&a = " << &a << endl; 
    int b = 2; 
    int c = 0; 
    add(a, b, c); 
    cout << "\tc = " << c << endl; 

    return EXIT_SUCCESS; 

}

void add(int& a, int& b, int& c) {
    cout << "\t&a = " << &a << endl; 
    c = a + b; 
}