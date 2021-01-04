/**
 * ref.: https://www.youtube.com/watch?v=t9s6280XQ5Q
 **/

#include <iostream> 

using namespace std; 

struct Person {
public: 
    string name; 
    int age;
    Person(const string& name, int age): name(name), age(age) {}
};

void* getPerson(const string& name, int age) {
    auto person1 = new Person(name, age); 
    return person1; 
}

int main() {

    auto person1 = static_cast<Person*>(getPerson("Bob", 12));
    cout << "name = " << person1->name << " and age = " << person1->age << endl; 

    return 0; 

}