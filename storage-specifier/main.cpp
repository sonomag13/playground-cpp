#include <iostream>
#include <vector>

#include "Header.h"

using namespace std;

extern int a;

int main() {

    // try out external
    cout << "external a = " << a << endl;

    // mutable variable
    const Person p1("Mike", 10);
    /**
     *  this is illegal since name is immutable
     *  p1.name = "Sam";
     *  p1.setName("Sam");
     */
    p1.age = 20;
    cout << "name = " << p1.name << endl;
    cout << "age = " << p1.age << endl;

    // register
    register vector<int> vec1{1, 2, 3, 4, 5};
    for (auto val : vec1) {
        cout << "val = " << val << endl;
    }

    return 0;
}
