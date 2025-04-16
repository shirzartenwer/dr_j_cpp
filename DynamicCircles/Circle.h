#ifndef CIRCLE_H
#define CIRCLE_H


class Circle {
    public:
        Circle();
        Circle(double radius);
        double getCircumference() const;
        double getArea() const;
        void setRadius(double radius);
        
    private:
        double radius;

};
#endif 