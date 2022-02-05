#include <iostream>

void printString(const std::string & strIn) {
    std::cout << strIn << std::endl; 
}

int main() {

    std::string firstName{"Will"};
    std::string lastName{"Smith"};

    printString(firstName + lastName); 

    return 0;

}