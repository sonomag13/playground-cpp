/**
 * this is a coding practice regarding operator overloading
 * Ref: https://www.youtube.com/watch?v=ZcmQ5y7QyTc
 */

#include <iostream>

#include "Helper.hpp"


using namespace std; 

int main(int argc, char** argv) {

    Vector2 vec1(3.2, 5.7);
    Vector2 vec2(3.2, 5.7);

    Vector2 vec3 = vec1 + vec2; 

    cout << "vec3.x = " << vec3.getX() << " and vec3.y = " << vec3.getY() << endl; 

    cout << "vec1 == vec2? " << (vec1 == vec2) << endl; 

    
    return EXIT_SUCCESS; 

}