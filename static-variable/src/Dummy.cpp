#include "DummyClass.h"

Entity::Entity() {

}

Entity::Entity(int x, int y) {
    this->x = x; 
    this->y = y; 
}

void Entity::printVar() {
    char* msg = (char*) malloc(1024); 
    sprintf(msg, "\tx = %d and y = %d; z = %d", x, y, z);
    cout << msg << endl; 
}

// static function to print
void Entity::staticPrintVar(Entity* ptrE) {    
    char* msg = (char*) malloc(1024); 
    sprintf(msg, "\tx = %d and y = %d; z = %d", ptrE->x, ptrE->y, ptrE->z); 
    cout << msg << endl; 
}