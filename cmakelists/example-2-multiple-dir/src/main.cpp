#include <cassert>
#include <iostream>
#include <string>

#include "Person.hpp"

int main(int argc, char** argv) {

    assert(argc > 1); 

    Person personX; 
    personX.setName(argv[1]);     
    std::cout << "Hello " << personX.getName() << std::endl; 

    return EXIT_SUCCESS; 

}