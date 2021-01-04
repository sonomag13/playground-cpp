/**
 * ref: https://www.youtube.com/watch?v=JAOZjf4KneY
 */

#include <iostream>
#include <vector>

#include "Helper.h"

using namespace std;

/*
void printString(const string& strIn) {
    // works for both rvalue and lvalue
    cout << "[both rvalue and lvalue]" << strIn << endl;
}
 */

void printString(string& strIn) {
    // works for rvalue
    cout << "[rvalue] " << strIn << endl;
}

void printString(string&& strIn) {
    /**
     * works for lvalue
     * this function can tell that the input variable is a left value
     */
    cout << "[lvalue] " << strIn << endl;
}

int main() {

    // example 1: basics of lvalue and right value
    cout << "Example 1" << endl;
    string firstName {"John"};
    string lastName {"Doe"};
    string fullName {firstName + " " + lastName};

    // rvalue is passed in this function
    printString(fullName);
    // lvalue is passed in this function since firstName + ' ' + lastName is a temporary value
    printString(firstName + ' ' + lastName);

    cout << "\n\n";

    // example 2
    cout << "Example 2" << endl;
    int a{1};
    // int& b = 20;     // this is illegal since 20 is a rvalue
    int&& c = 20;       // this is legal for modern C++
    cout << "c = " << c << " and &c = " << &c << endl;

    cout << "\n\n";

    // example 3 : what happens if there is only copy constructor
    cout << "Example 3: copy constructor only" << endl;
    vector<A> vect;
    /**
     * what happens in this case?
     * - an A object is instantiated, but it is a right value
     * - when push back in the vector, the copy constructor is called
     * - after being pushed, the destructor will be called
     * - after the entire script, the destructor will be called again
     */
    vect.emplace_back(A());

    cout << "\n\n";

    // example 4
    cout << "Example 4: move constructor implemented" << endl;
    vector<B> vectB;

    // move constructor is used in this case
    cout << "\n4.1 pass in a rvalue" << endl;
    vectB.emplace_back(B());


    // move constructor is not utilized in this case
    /*
    cout << "pass in a lvalue" << endl;
    vectB.push_back(b1);
     */

    //
    cout << "\ncreate a left value object of class B" << endl;
    B b1;

    // move constructor is used in this case again
    cout << "\n4.2 pass in a lvalue in the move() function" << endl;
    vectB.emplace_back(move(b1));

    cout << "\n\nExit"<< endl;

    return EXIT_SUCCESS;
}