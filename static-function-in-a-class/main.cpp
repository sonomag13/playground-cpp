#include <iostream>
#include "MyClass.h"

using namespace std;

int main() {

    MyClass myClass;
    int sum1 = myClass.addFunction(1, 2);
    int sum2 = MyClass::addFunction(1, 2);

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;
}
