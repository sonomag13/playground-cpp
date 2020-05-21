//
// Created by strobe on 5/21/20.
//

#ifndef VIRTUAL_FUNCTION_CLASSDEFINITION_H
#define VIRTUAL_FUNCTION_CLASSDEFINITION_H

#include <iostream>

using namespace  std;

class BaseEntity {
public:
    virtual string getName() {
        return "entity";
    }
};

class DerivedEntity : public BaseEntity {
private:
    string name;
public:
    DerivedEntity(string name) {
        this->name = name;
    }
    ~DerivedEntity() = default;
    string getName() override {
        return this->name;
    }
};

#endif//VIRTUAL_FUNCTION_CLASSDEFINITION_H
