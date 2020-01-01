#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    cout << "\nargc = " << argc << endl;
    cout << "&argc = " << &argc << endl;

    cout << "\n&argv[0] = " << &argv[0] << endl;
    cout << "&argv = " << &argv << endl;

    cout << "\nloop through the arguments" << endl;
    for(int i=0; i<=argc; i++) {
        cout << "\t" << argv[i] << endl;
        cout << "\t" << &argv[i] << endl;
    }

    return 0;
}