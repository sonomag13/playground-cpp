#include <iostream>

#include "NamespaceHeader.h"

int main() {

    int c= F1::add(1, 2);
    cout << "c = " << c << endl;

    F2::print(1, 2);

    return 0;
}
