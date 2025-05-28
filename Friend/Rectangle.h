#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
    // this frined relationship is one directional. you can access Rectangle through it's friends
    // not its friends through rectangel
    friend void changeData(Rectangle& rect);
    friend class RectangleHelper; // forward declaration 


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