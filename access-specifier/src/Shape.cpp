#include "Shape.hpp"

// base class
Shape::Shape() {

}

Shape::Shape(int width, int height) {
        this->width = width;
        this->height = height; 
}

Shape::~Shape() = default; 

void Shape::setWidth(int width) {
    this->width = width; 
}

void Shape::setHeight(int height) {
    this->height = height; 
}

int Shape::getWidth() {
    return width; 
}

int Shape::getHeight() {
    return height; 
}

// derived class
int Rectangle::getArea() {
    calcArea(); 
    return area; 
}

void Rectangle::calcArea() {        
    area = width * height; 
}