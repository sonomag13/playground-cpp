//
// Created by luther on 10/4/20.
//

#pragma once

#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "[class A] constructor" << endl;
        this->ptr = new int;
    }

    // this is a copy constructor
    A(const A& a1) {
        cout << "[class A] copy constructor" << endl;
        this->ptr = new int;
    }

    ~A() {
        cout << "[class A] destructor" << endl;
        delete ptr;
    }

private:
    int* ptr;
};

/**
 * class A does not have a move constructor, and is unable to handle the rvalue.
 * It will create a server over heading, e.g. an A object will be constructed for multiple times
 *
 * class B, have a move constructor, that can directly handle the rvalue
 */


class B {
public:

    int* ptr;

    B() {
        cout << "[class B] constructor" << endl;
        this->ptr = new int;
    }

    // this is a copy constructor
    B(const B& b1) {
        cout << "[class B] copy constructor" << endl;
        this->ptr = new int;
    }

    // notice that && represent b1 is a right value
    B(B&& b1) noexcept {
        cout << "[class B] move constructor" << endl;
        // this object now have the ownership of ptr
        this->ptr = b1.ptr;
        // b1 loses the ownership of ptr, so that the memory space pointed by ptr is only pointed by this object
        b1.ptr = nullptr;
    }

    ~B() {
        cout << "[class B] destructor" << endl;
        delete ptr;
    }

private:

};
