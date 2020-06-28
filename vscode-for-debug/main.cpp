#include <iostream>
#include <vector>
#include <string>

#include "Person.hpp"

int main() {

    Person personX; 
    personX.setName("Lu Gao"); 

    std::vector<std::string> vec {"Hello", "world"};

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec.at(i) << " "; 
    }
    std::cout << personX.getName() << std::endl; 
    
    int a{1}; 
    int b{2};

    Person::printNum(a, b);
    
    return EXIT_SUCCESS; 

}