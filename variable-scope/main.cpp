#include <iostream>

int X = 0;

using namespace std;

int main() {

    int X = 1;

    cout << "local X = " << X << endl;

    cout << "global X = " << ::X << endl;

    int var0 = 0;
    {
        int var1 = 1;
        {
            int var2 = 2;
            cout << "the second scope: " << endl;
            cout << "\tvar0 = " << var0 << endl;
            cout << "\tvar1 = " << var1 << endl;
            cout << "\tvar2 = " << var2 << endl;
        }
        cout << "the first scope: " << endl;
        cout << "\tvar0 = " << var0 << endl;
        cout << "\tvar1 = " << var1 << endl;
        // this is illegal since var2 is not declared in this scope
        // cout << "var2 = " << var2 << endl;
    }
    cout << "the zero scope" << endl;
    cout << "\tvar0 = " << var0 << endl;
    // this is illegal since var1 and var2 are not declared in this scope
    // cout << "var1 = " << var1 << endl;
    // cout << "var2 = " << var2 << endl;


    return 0;
}
