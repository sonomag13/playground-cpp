#include <iostream>

using namespace std; 

class Base {
public:
Base() = default; 
~Base() = default;
int plus_one(int input) {
    return _plus_one(input); 
}

private:
int _plus_one(int input) {
    return input + 1; 
}

};

class Derived : public Base {
public:
Derived() = default;
~Derived() = default; 

};

int main() {

    Derived der; 
    
    cout << der.plus_one(5) << endl; 

    return 0;
}