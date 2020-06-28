#include <cassert>
#include <iostream>

#include "DummyClass.h"

using namespace std; 

int Entity::z; 

int main(int argc, char* argv[]) {

    assert(argc > 1); 

    Entity e1; 
    Entity e2(5, 6); 

    cout << "\nset the static member" << endl;
    Entity::z = stoi(argv[1]); 
    
    e1.printVar(); 
    e2.printVar(); 

    Entity::z += 100; 
    e1.printVar(); 
    e2.printVar(); 

    cout << "\nprint with static print function" << endl; 
    Entity::staticPrintVar(&e1);
    Entity::staticPrintVar(&e2);

    return 0;
}
