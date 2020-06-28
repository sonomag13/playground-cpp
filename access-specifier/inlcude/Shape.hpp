#pragma once

// base class
class Shape {

public: 
    
    // constructor
    Shape();
    Shape(int width, int height); 

    // desctructor
    ~Shape();

    // set function 
    void setWidth(int width); 
    void setHeight(int height);
    int getWidth();
    int getHeight();  

protected:
    int width{0}; 
    int height{0};
    
};

class Rectangle: public Shape {

public:
    int getArea(); 

private: 
    int area; 

    void calcArea(); 
    
};