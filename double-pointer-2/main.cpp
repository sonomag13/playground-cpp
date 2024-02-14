#include <iostream>



using namespace std;

void swap(int** x, int** y) {

    cout <<  "in swap double pointer" << endl;
    cout << "x = " << x << endl;
    cout << "*x = " << *x << endl;

    int * t = *x;
    *x = *y;
    *y = t;
}

void swap(int* x, int* y) {

    cout << "in swap single pointer" << endl;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;
    cout << "*x = " << *x << endl;

    int t = *x;
    *x = *y;
    *y = t;
}

int main() {

    int x{5}, y{10};
    int * ptr_x{&x};
    int ** ptr_ptr_x{&ptr_x};
    int * ptr_y{&y};
    int ** ptr_ptr_y{&ptr_y};

    cout << "ptr_ptr_x = " << ptr_ptr_x << endl;
    cout << "*ptr_ptr_x = " << *ptr_ptr_x << endl;
    cout << "ptr_x = " << ptr_x << endl;

    cout << "\n*ptr_x = " << *ptr_x << " and *ptr_y = " << *ptr_y << endl;
    swap(ptr_x, ptr_y);
    cout << "*ptr_x = " << *ptr_x << " and *ptr_y = " << *ptr_y << endl;

//    cout << "\n**ptr_ptr_x = " << **ptr_ptr_x << " and **ptr_ptr_y = " << **ptr_ptr_y << endl;
//    swap(ptr_ptr_x, ptr_ptr_y);
//    cout << "**ptr_ptr_x = " << **ptr_ptr_x << " and **ptr_ptr_y = " << **ptr_ptr_y << endl;

    return 0;
}