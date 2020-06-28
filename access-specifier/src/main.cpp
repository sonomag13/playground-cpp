#include <iostream>

#include "Shape.hpp"

using namespace std; 

int main(int argc, char** argv) {

    int width{5}; 
    int height{6};     

    char* msg{(char*) malloc(1024)}; 

    Shape shape1;
    Shape shape2(5, 6);    
    
    sprintf(msg, "\twidth = %d and height = %d", shape1.getWidth(), shape1.getHeight()); 
    cout << "\nshape 1" << endl;         
    cout << msg << endl; 
    free(msg); 

    sprintf(msg, "\twidth = %d and height = %d", shape2.getWidth(), shape2.getHeight()); 
    cout << "\nshape 2" << endl;
    cout << msg << endl; 
    free(msg); 
    
    Rectangle rectShape; 
    rectShape.setWidth(width);
    rectShape.setHeight(height);          
    msg = {(char*) malloc(1024)}; 
    cout << "\nrectangle" << endl;         
    sprintf(msg, "\twidth = %d and height = %d", rectShape.getWidth(), rectShape.getHeight()); 
    cout << msg << endl; 
    sprintf(msg, "\tthe area = %d\n", rectShape.getArea());     
    cout << msg << endl; 

    delete(msg); 

    return EXIT_SUCCESS; 

}