#include <iostream>

using namespace std;

long int factorial(int x) {
    if(x == 1) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {

    cout << factorial(10) << endl;

    return 0;
}