#include <iostream>

#include "Dummy.hpp"

using namespace std; 

int Entity::z; 

int main(int argc, char* argv[]) {    

    cout << "\nInstantiate two Entity object" << endl; 
    Entity e1; 
    Entity e2(5, 6); 

    cout << "\nFirst, the static variable has been set to 0" << endl; 
    /**
     * Notice that is will be illegal to use
     *                  e1.z = 0
     * The reason is that z is not owned by e1, but owned
     * by class Entity
     */
    e1.printVar(); 
    e2.printVar();     
    
    cout << "Then, the static variable has been set to 10" << endl; 
    Entity::z = 10;         
    e1.printVar(); 
    e2.printVar(); 

    return EXIT_SUCCESS;

}
