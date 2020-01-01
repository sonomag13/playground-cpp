#include <iostream>

using namespace std;

int main() {
    string str1 = "Hello, World!";
    string str2print;
    char char2plot[128];
    int counter;
    cout << "str.size() = " << str1.size() << endl;
    for(int i = 0; i < str1.size(); i++) {
        int counter = sprintf(char2plot, "the %dth character is %c", i, str1[i]);
        cout << char2plot << " & counter = " << counter << endl;
    }
    return 0;
}