#include <iostream>

#include "helper.hpp"

using namespace std; 

int main() {

    // using inplicit constructor
    cout << "\n------------ inplicit constructor------------\n" << endl;     
    implicitEntity impEnt1 = string("Bob"); 
    implicitEntity impEnt2 = 20; 
    impEnt1.printVar();
    impEnt2.printVar();


    // using explicit constructor
    cout << "\n\n------------ explicit constructor------------\n" << endl;     
    explicitEntity expEnt1("Bob"); 
    explicitEntity expEnt2(20); 
    expEnt1.printVar(); 
    expEnt2.printVar(); 

    // the following instantiations not allowed
    // explicitEntity expEnt3 = 20; 
    // explicitEntity expEnt4 = string("Bob"); 
    
}