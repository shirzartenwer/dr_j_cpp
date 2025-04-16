#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
    public:
        Rectangle();
        Rectangle(double length, double width);
        double getLength() const;
        double getWidth() const; 
        void setLength(double length);
        void setWidth(double width);
        double area() const;
        double perimeter() const;
    private:
        double length;
        double width;
        double area_;
};

#endif