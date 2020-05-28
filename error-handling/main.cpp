#include <iostream>

using namespace std;

int main() {

    int i{2};

    if (i == 1) {
        cout << "i = " <<  i << endl;
    }
    else {
        throw runtime_error("value of i is wrong");
    }

    return 0;
}
