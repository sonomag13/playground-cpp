#include <iostream>

#include "Dummy.hpp"

using namespace std; 

int Entity::z; 

int main(int argc, char* argv[]) {    

    cout << "\nInstantiate two Entity object, e1 and e2" << endl; 
    Entity e1; 
    Entity e2(5, 6); 

    cout << "\nFirst, the static variable has been set to 0" << endl;     
    Entity::z = 0;         
    e1.printVar(); 
    e2.printVar();     
    
    cout << "Then, the static variable has been set to 10" << endl; 
    Entity::z = 10;         
    e1.printVar(); 
    e2.printVar(); 

    cout << "Finally, let us use e1.z = 20" << endl; 
    e1.z = 20;         
    e1.printVar(); 
    e2.printVar(); 

    return EXIT_SUCCESS;

}
