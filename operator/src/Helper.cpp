#include "Helper.hpp"

Vector2::Vector2() : x_(0.0), y_(0.0) {

}

Vector2::Vector2(double x, double y) : x_(x), y_(y) {
    
}

double Vector2::getX() const {
    return x_; 
}

double Vector2::getY() const {
    return y_; 
}

void Vector2::setX(const double x) {
    x_ = x; 
}

void Vector2::setY(const double y) {
    y_ = y; 
}

Vector2 Vector2::operator + (const Vector2& vecIn) {
    Vector2 vecOut(0.0, 0.0); 
    vecOut.setX(x_ + vecIn.getX()); 
    vecOut.setY(y_ + vecIn.getY()); 
    return vecOut; 
} 

bool Vector2::operator == (const Vector2& vecIn) {
    return x_ ==  vecIn.getX() &&  y_ ==  vecIn.getY();
} 