#pragma once

#include <iostream>

class Vector2 {

private: 
    double x_; 
    double y_; 

public: 
    Vector2(); 
    Vector2(double x, double y); 
    ~Vector2() = default; 
    double getX() const; 
    double getY() const; 
    void setX(const double x); 
    void setY(const double y); 
    Vector2 operator + (const Vector2& vecIn); 
    bool operator == (const Vector2& vecIn); 

}; 