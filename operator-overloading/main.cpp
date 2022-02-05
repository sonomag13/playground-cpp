#include <iostream>

#include "Box.hpp"

using namespace std; 

int main() {

    Box box1(1.0, 2.0);
    Box box2(3.0, 4.0); 

    Box box3{box1 + box2}; 

    cout << box3.getArea() << endl; 

    return 0; 

}