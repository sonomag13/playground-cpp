//
// Created by strobe on 4/20/20.
//

#include <iostream>

using namespace std;

int main() {
    string str1{"1.23+i4.56"};
    cout << str1 << endl;

    int posPlus = str1.find('+');
    int strLen = str1.length();

    cout << "position of plus = " << posPlus << endl;

    cout << "string length = " << strLen << endl;

    cout << "real part = " << str1.substr(0, 4) << endl;

    cout << "imaginary part = " << str1.substr(posPlus+2, 4) << endl;

    cout << "posPlus == strLen: " << (posPlus == strLen) << endl;


}