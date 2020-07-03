#pragma once

#include <cassert>
#include <cmath>
#include <iostream>

#define SMALL_VAL 1.0E-6

using namespace std; 

/**
 * In this coding practice, we will learn:
 * - inheritance
 * - polymorphorism & virtual function
 * - abstract class 
 */ 

/**
 * shape is so-called abstract class and its 
 * only purpose is to define virtual functions
 * 
 * this class does not even need a constructor
 */
class Shape {
public:
    virtual double getArea() = 0; 
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) {
        this->width = width; 
        this->height = height; 
    }
    
    ~Rectangle() = default; 
    double getArea() override {
        return this->width * this->height; 
    }
private: 
    double width{0.0};
    double height{0.0}; 
};

// Square is derived from Rectangle
class Square : public Rectangle {
public: 
    Square(double width, double height) : Rectangle(width, height) {
        assert(abs(width - height) < SMALL_VAL); 
        this->edgeLength = width;         
    }
    
    double getArea() override final {
        return pow(edgeLength, 2);  
    }

protected: 
    double edgeLength{0.0};     
    friend class accessSquareParameter; 
}; 

class Circle : public Shape {
public: 
    Circle(double radius) {
        this->radius = radius; 
    }

    double getArea() override final {
        return M_PI * pow(radius, 2); 
    }
private:
    double radius{0.0}; 
};