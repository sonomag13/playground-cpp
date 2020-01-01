#include <iostream>
#include <cmath>

using namespace std;

int *squarePtr(int *);
int &squareRef(int &);
int *squarePtrNewAlloc(int *);
int &squareRefNewAlloc(int &);

int main() {

    int x1 = 8, x2 = 9, x3 = 10, x4 = 11;
    int *y1 = nullptr;
    int *y3 = nullptr;

    cout << "\npointer" << endl;
    cout << "\tbefore calling the function "<< endl;
    cout << "\t\tin main, x1 = " << x1 << endl;
    cout << "\t\tin main, &x1 = " << &x1 << endl;
    cout << "\t\tin main, y1 = " << y1 << endl;
    cout << "\tcalling the function" << endl;
    y1 = squarePtr(&x1);
    cout << "\tafter calling the function" << endl;
    cout << "\t\tin main, y1 = " << y1 << endl;
    cout << "\t\tin main, *y1 = " << *y1 << endl;
    cout << "\t\tin main, x1 = " << x1 << endl;
    cout << "\t\tin main, &x1 = " << &x1 << endl;

    cout << "\n\nreference" << endl;
    cout << "\tbefore calling the function" << endl;
    cout << "\t\tx2 = " << x2 << endl;
    cout << "\t\t&x2 = " << &x2 << endl;
    cout << "\tcalling the function" << endl;
    int &y2 = squareRef(x2);
    cout << "\tafter calling the function" << endl;
    cout << "\t\tin main, x2 = " << x2 << endl;
    cout << "\t\tin main, &x2 = " << &x2 << endl;
    cout << "\t\tin main, y2 = " << y2 << endl;
    cout << "\t\tin main, &y2 = " << &y2 << endl;

    cout << "\n\npoint with new allocation" << endl;
    cout << "\tbefore calling the function" << endl;
    cout << "\t\tin main, y3 = " << y3 << endl;
    cout << "\t\tin main, x3 = " << x3 << endl;
    cout << "\t\tin main, &x3 = " << &x3 << endl;
    cout << "\tcalling the function" << endl;
    y3 = squarePtrNewAlloc(&x3);
    cout << "\tafter calling the function" << endl;
    cout << "\t\tin main, y3 = " << y3 << endl;
    cout << "\t\tin main, *y3 = " << *y3 << endl;
    cout << "\t\tin main, x3 = " << x3 << endl;
    cout << "\t\tin main, &x3 = " << &x3 << endl;

    cout << "\n\nnew allocation by reference" << endl;
    cout << "\tbefore calling the function" << endl;
    cout << "\t\tin main, x4 = " << x4 << endl;
    cout << "\t\tin main, &x4 = " << &x4 << endl;
    cout << "\tcalling the function" << endl;
    int &y4 = squareRefNewAlloc(x4);
    cout << "\tafter calling the function" << endl;
    cout << "\t\tin main, y4 = " << y4 << endl;
    cout << "\t\tin main, &y4 = " << &y4 << endl;

    return 0;

}

int *squarePtr(int *x) {
    cout << "\t\tin ptr func, x = " << x << endl;
    cout << "\t\tin ptr func, *x = " << *x << endl;
    *x *= *x;
    return x;
}

int &squareRef(int &x) {
    cout << "\t\tin ref func, x = " << x << endl;
    cout << "\t\tin ref func, &x = " << &x << endl;
    x *= x;
    return x;
}

int *squarePtrNewAlloc(int *x) {
    cout << "\t\tin new allo func, x = " << x << endl;
    cout << "\t\tin new allo func, *x = " << *x << endl;
    int *y = new int(pow(*x, 2));
    cout << "\t\tin new allo func, y = " << y << endl;
    cout << "\t\tin new allo func, *y = " << *y << endl;
    return y;
}

int &squareRefNewAlloc(int &x) {
    cout << "\t\tin new allo func, x = " << x << endl;
    cout << "\t\tin new allo func, &x = " << &x << endl;
    int *y = new int(pow(x, 2));
    cout << "\t\tin new allo func, y = " << y << endl;
    cout << "\t\tin new allo func, *y = " << *y << endl;
    return *y;
}