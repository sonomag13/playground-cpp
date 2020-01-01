#include <iostream>

using namespace std;

int square_byValue(int);
void square_byPointer(int *);
void square_byReference(int &);

// illegal practice
// int *square_returnLocalAddress(int *);

int main() {

    int a = 8;
    int b;

    cout << "pass by value" << endl;
    b = square_byValue(a);
    cout << "\tin main, a = " << a << endl;
    cout << "\tin main, &a = " << &a << endl;
    cout << "\tin main, b = " << b << endl;
    cout << "\tin main, after calling function, a = " << a << endl;

    cout << "\n\npass by pointer" << endl;
    square_byPointer(&a);
    cout << "\tin main, after calling function, a = " << a << endl;

    cout << "\n\npass by reference" << endl;
    a = 8;
    square_byReference(a);
    cout << "\tin main, after calling function, a = " << a << endl;

    /*
    a = 8;
    int *bptr;
    cout << "\n\nreturning local address is a bad practice" << endl;
    cout << "\tin main, &a = " << &a << endl;
    bptr = square_returnLocalAddress(&a);
    cout << "bptr = " << bptr << endl;
    cout << "*bptr = " << &bptr << endl;
    */

    return 0;
}

int square_byValue(int val) {
    cout << "\tin by value function, val = " << val << endl;
    cout << "\tin by value function, &val = " << &val << endl;
    return val * val;
}

void square_byPointer(int *val) {
    cout << "\tin by pointer function, val = " << val << endl;
    cout << "\tin by pointer function, *val = " << *val << endl;
    *val *= *val;
}

void square_byReference(int &val) {
    cout << "\tin by reference function, val = " << val << endl;
    cout << "\tin by reference function, &val = " << &val << endl;
    val *= val;
}

/*
int *square_returnLocalAddress(int *aptr) {
    int a, b;
    cout << "in return local add., aptr = " << aptr << endl;
    cout << "in return local add., *aptr = " << *aptr << endl;
    a = *aptr;
    b = a * a;
    cout << "in return local add., b = " << b << endl;
    cout << "in return local add., &b = "  << &b << endl;
    return &b; // not allowed-!
}
 */