#include <iostream>

using namespace std;

int *p1, *p2;

void allocate(int, int);

int main() {

    allocate(10, 20);
    cout << "\n\nin main" << endl;
    cout << "\tp1 = " << p1 << endl;
    cout << "\tp2 = " << p2 << endl;
    cout << "\t*p1 = " << *p1 << endl;
    cout << "\t*p2 = " << *p2 << endl;

    delete p1;
    delete p2;
    cout << "\n\nin main, after delete" << endl;
    cout << "\tp1 = " << p1 << endl;
    cout << "\tp2 = " << p2 << endl;
    cout << "\t*p1 = " << *p1 << endl;
    cout << "\t*p2 = " << *p2 << endl;

    return 0;
}

void allocate(int a, int b) {
    p1 = new int {a};
    p2 = new int {b};
    cout << "\n\n in allo function " << endl;
    cout << "\tp1 = " << p1 << endl;
    cout << "\tp2 = " << p2 << endl;
    cout << "\t*p1 = " << *p1 << endl;
    cout << "\t*p2 = " << *p2 << endl;
}