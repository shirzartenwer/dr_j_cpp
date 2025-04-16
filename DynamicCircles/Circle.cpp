#include "Circle.h"


Circle::Circle() {
    this->radius = 1.0;
};

Circle::Circle(double radius){
    this->radius = radius;
};

double Circle::getCircumference() const {
    return 2*3.14* this->radius;
};


double Circle::getArea() const {
    return 3.14*this->radius *this->radius;
};

void Circle::setRadius(double radius) {
    this->radius = radius;
};