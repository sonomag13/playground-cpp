#include <iostream>

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

    string firstName {"John"};
    string lastName {"Doe"};
    string fullName {firstName + " " + lastName};

    // in this function rvalue is passed in since firstName + ' ' + lastName is a temporary value
    printString(fullName);

    // in this function lvalue is passed in since firstName + ' ' + lastName is a temporary value
    printString(firstName + ' ' + lastName);

    return EXIT_SUCCESS;
}