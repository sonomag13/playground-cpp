#include "DummyClass.h"

Entity::Entity() {

}

Entity::Entity(int x, int y) {
    this->x = x; 
    this->y = y; 
}

void Entity::printVar() {
    char* msg = (char*) malloc(1024); 
    sprintf(msg, "\nx = %d and y = %d; z = %d\n", x, y, z);
    cout << msg << endl; 
}

/*
static void staticPrintVar(Entity* ptrE) {      
    cout << "\nI am here" << endl;   
    char* msg = (char*) malloc(1024); 
    sprintf(msg, "\nx = %d and y = %d; z = %d\n", ptrE->x, ptrE->y, ptrE->z); 
}
 */