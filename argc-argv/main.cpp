#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char** argv) {

    /*
    char text[] = "a string of characters";
    string textStr = "a string of characters";
    string textStr2 = text;
    cout << "text = " << text << endl;
    cout << "&text = " << &text << endl;

    char thridchar = text[3];
    char thridchar2 = *(text + 3);
    cout << "thridchar = " << thridchar << endl;
    cout << "thridchar2 = " << thridchar2 << endl;

    cout << "textStr = " << textStr << endl;
    cout << "&textStr = " << &textStr << endl;
    cout << "textStr2 = " << textStr2 << endl;
    cout << "&textStr2 = " << &textStr2 << endl;
    // not allowed-!
    // cout << "*(textStr+3) = " << *(textStr + 3) << endl;
    */

    cout << "argc = " << argc << endl;
    for(int i=0; i<argc; i++) {
        cout << "\targv[" << i << "] = " << argv[i] << endl;
    }

    return 0;

}