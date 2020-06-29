#pragma once 

#include <iostream>

using namespace std; 

class implicitEntity {

private: 
    string name; 
    int num;

public: 
    implicitEntity(string name) : name(name), num(-1) { 

    }

    implicitEntity(int num) : name("unknown"), num(num) {

    }

    ~implicitEntity() = default; 

    void printVar() {
        cout << "\tname = " << this->name; 
        cout << " and num = " << this->num << endl; 
    }

}; 


class explicitEntity {

private: 
    string name; 
    int num; 

public:     
    explicit explicitEntity(string name) : name(name), num(-1) {

    }

    explicit explicitEntity(int num) : name("unknown"), num(num) {

    }

    ~explicitEntity() = default; 

    void printVar() {
        cout << "\tname = " << this->name; 
        cout << " and num = " << this->num << endl; 
    }

};