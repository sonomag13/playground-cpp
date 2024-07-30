#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <numeric>
#include <cmath>

#include "friend.hpp"
#include "helper.hpp"

void printArea(Shape &);
void printArea(Shape *);

int main(void) {

    // Rectangle is derived from Shape
    Rectangle rectagle(5.0, 6.0);
    
    /**
     * Square is derived from Rectangle
     * - access (read and write) protected variable via friend function
     * - getArea() is set override final in square, so its derived class
     *   can no longer override this member function
     */
    Square square(2.0, 2.0);
    cout << "initial edge length = " << accessSquareParameter::getEdge(square) << endl;
    accessSquareParameter::setEdge(square, 10.0);
    cout << "new edge length = " << accessSquareParameter::getEdge(square) << endl;

    // circl is derived from Shape
    Circle circle(1.0); 

    /**
     * SUMMARY
     * 
     * - rectangle, square and circle are instantiated out of the classes 
     *   Rectangle, Square and Circle respectively, and all of these classes 
     *   are derived from the base class Shape
     * 
     * - Shape is so called abstract class with the purpose to provide a 
     *   virtual fucntion, that is later on overriden in the derived classes
     * 
     * - Polymorphism: we only need to implment the function 
     *   printArea(Shape& shape), take the base class (or abstract class) as 
     *   the input, and call the virtual function. 
     *      - the conten of virtual function has been overidden as the method
     *        to calcuate the area is different for each shape
     *      - However, the member function name keeps the same, i.e. getArea()
     *      - In this case, given polymorphism, printArea is capable of 
     *        automatically call the getArea() function based on the input class
     *      - A big advantage is that, we do not need to write a printArea function 
     *        for each shape, and one function is all what we need
     */ 
    printArea(&rectagle); 
    printArea(&square); 
    printArea(&circle); 

    printArea(rectagle); 
    printArea(square); 
    printArea(circle); 

    return EXIT_SUCCESS; 

}

void printArea(Shape * shape) {
    std::cout << "Passing by pointer" << std::endl;
    cout << "area = " << shape->getArea() << endl; 
}

void printArea(Shape & shape) {
    std::cout << "Passing by reference" << std::endl;
    cout << "area = " << shape.getArea() << endl; 
}