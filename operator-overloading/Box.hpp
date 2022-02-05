
class Box {

public:

Box () {

}

Box (double width, double height): width(width), height(height) {

}

~Box() = default; 

double getArea() {
    return width * height; 
}

Box operator+(const Box& box2) {
    Box output;

    output.width = box2.width + this->width;
    output.height = box2.height + this->height;

    return output; 

}

private:

double width{0.0};
double height{0.0};
    
}; 