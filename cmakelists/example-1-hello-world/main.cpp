#include <cassert>
#include <iostream>
#include <vector>

using namespace std; 

int main(int argc, char* argv[]) {

    assert(argc > 1);
    cout << "Hello"; 
    for (size_t i = 1; i < (size_t) argc; ++i) {
        cout << " " << argv[i]; 
    }
    cout << endl; 
    return EXIT_SUCCESS; 

}