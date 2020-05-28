#include "ClassDefinition.h"

#include <iostream>

using namespace std;

void printName(BaseEntity* entity);

int main() {

    auto ptrEntity  = new BaseEntity;
    printName(ptrEntity);

    auto ptrDerivedEntity = new DerivedEntity("Michael Jordan");
    printName(ptrDerivedEntity);

    return 0;
}

void printName(BaseEntity* entity) {
    cout << "the name is " << entity->getName() << endl;
}
