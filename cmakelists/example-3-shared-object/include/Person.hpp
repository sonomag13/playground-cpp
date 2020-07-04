#pragma once

#include <iostream>

class Person {

public: 
    Person(); 
    ~Person(); 
    std::string getName(); 
    void setName(std::string name);         

private:    
    std::string name;     

};