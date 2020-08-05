//
// Created by luther on 8/3/20.
//

#pragma once

#include <iostream>

using namespace std;

int a = 20;

class Person {

public:
    string name;
    mutable int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void setName(string name2) {
        this->name = name2;
    }

};