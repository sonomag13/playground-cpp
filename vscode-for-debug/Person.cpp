#include "Person.hpp"

Person::Person() = default; 

Person::~Person() = default; 

void Person::setName(std::string name) {
    this->name = name; 
}

std::string Person::getName() {
    return name; 
}