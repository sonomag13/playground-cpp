#include <iostream>
#include <string>

using namespace std; 

class Entity {

public: 
    int x{0}; 
    int y{0}; 
    // static variable
    static int z; 

    Entity();

    Entity(int x, int y);

    ~Entity() = default; 

    void printVar(); 

    // static function
    static void staticPrintVar(Entity*);

private:
    // todo
    
}; 
