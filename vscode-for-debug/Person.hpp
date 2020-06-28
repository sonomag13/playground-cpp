#pragma once

#include <iostream>

class Person {

public: 
    Person(); 
    ~Person(); 
    std::string getName(); 
    void setName(std::string name);         

    static void printNum(int a, int b) {
        std::cout << "a = " << a << " and b = " << b << std::endl; 
    }

private:    
    std::string name;     

};