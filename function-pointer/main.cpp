#include <iostream>
#include <vector>

using namespace std;

void hello_world() {
    cout << "Hello, World!" << endl;
}

int hello_world2(int a) {
    cout << "Hello, World! The val = " << a << endl;
    return a;
}

template <typename T>
void printVal(T val) {
    cout << "val = " << val << endl;
}

template <typename T>
void traverseVect(vector<T> vecIn, void(*printFunc)(T)) {
    for (auto val : vecIn) {
        printFunc(val);
    }
}

int main() {

    /**
     * Option 1
     * both of func1 and func2 are pointing to the same address
     */
    auto func1 = hello_world;
    auto func2 = &hello_world;
    func1();
    func2();

    /**
     * Option 2
     */
    void(* funcPointer)();
    funcPointer = hello_world;
    funcPointer();

    /**
     * option 3
     * using typedef
     */
    typedef void(* HelloWorldFunc)();
    HelloWorldFunc func4 = hello_world;
    func4();

    /**
     * what about if the function asks for an input?
     */
    typedef int(* HelloWorldFunc2) (int);
    HelloWorldFunc2 func5 = hello_world2;
    int val = func5(5);
    cout << "val return = " << val << endl;

    /**
     * a more useful case
     * - a variable and a function have been passed in
     */
    vector<int> vect1{0, 1, 2, 3, 4};
    traverseVect(vect1, printVal<int>);

    vector<double> vect2{0.1, 1.1, 2.1, 3.1, 4.1};
    traverseVect(vect2, printVal<double>);

    return 0;
}
