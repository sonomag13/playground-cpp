#include <iostream>
#include <string>
#include <memory>

using namespace std; 

class Entity {
public: 
    Entity(int val, const string& strPtrType): val(val), strPtrType(strPtrType) {
        cout << "entity constructed" << endl; 
    }
    ~Entity() {
        cout << strPtrType << ": " << "entity destroyed" << endl; 
    }; 
    void print() {
        cout << strPtrType << ": " << "val = " << val << endl; 
    }

private: 
    int val; 
    string strPtrType; 

};

int main() {

    int val = 3; 
    
    // unique pointer
    {   
        /**
         * - a unique point will be automatically destroyed when exiting the scope
         * - a normal point will not destroyed, but cannot be invoked out the scope 
         *   it turns to be a zombie
         */ 
        unique_ptr<Entity> uniquePtrEnt(new Entity(val, string("unique ptr")));
        uniquePtrEnt->print();     
        
        // normal pointer can be copied
        auto normalPtrEnt = new Entity(val, string("normal pointer 1")); 
        normalPtrEnt->print();
        Entity* normalPtrEnt2 = normalPtrEnt;         
        normalPtrEnt2->print();
        cout << "&normalPtrEnt = " << &normalPtrEnt << endl;
        cout << "&normalPtrEnt2 = " << &normalPtrEnt2 << endl;
        /**
         * it is forbidden to copy a unique pointer
         * two unique pointer cannt point to the same object
         */ 
        // unique_ptr<Entity> uniquePtrEnt2 = uniquePtrEnt; 

        // However, it is allowd to build a pointer to point to the object
        Entity* 

    }
    // this is also forbidden although the pointer was not destroyed
    // normalPtrEnt->print();

    cout << "just get out of the scope of unique pointer " << endl; 

    cout << "\n\n--------------------------------------------------------------\n\n" << endl; 

    // shared pointer
    {   
        shared_ptr<Entity> sharedPtr0; 
        {
            shared_ptr<Entity> sharedPtr1 = std::make_shared<Entity> (val, "shared ptr 1");
            sharedPtr0 = sharedPtr1; 
            sharedPtr0->print();
            sharedPtr1->print();
        }
        // shardPtr0 is not dead
        sharedPtr0->print();
        // sharedPtr1 is dead out of the inner scope
        // sharedPtr1->print();
        cout << "just get out of the inner scope of shared pointer " << endl; 
    }

    // sharedPtr0 is destroyed here when exiting the outter scope

    cout << "just get out of the outer scope of shared pointer " << endl; 

     cout << "\n\n--------------------------------------------------------------\n\n" << endl; 

    // weak pointer
    {   
        weak_ptr<Entity> weakPtr0; 
        {
            shared_ptr<Entity> sharedPtr1 = std::make_shared<Entity> (val, "shared ptr 1");
            sharedPtr1->print();
            weakPtr0 = sharedPtr1;            
        }
        // weakPtr0 also die with sharedPtr1
        // weakPtr0->print();
        // sharedPtr1 is dead out of the inner scope
        // sharedPtr1->print();
        cout << "just get out of the inner scope of shared pointer " << endl; 
    }

    // sharedPtr0 is destroyed here when exiting the outter scope

    cout << "just get out of the outer scope of shared pointer " << endl; 

    return EXIT_SUCCESS; 
}



