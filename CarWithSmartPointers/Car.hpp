#ifndef CAR_HPP
#define CAR_HPP


#include <string>
#include <iostream>
using namespace std;

class Car {
    public:
        Car(string color, int numDoors);
        ~Car();
        string getColor() const;
        int getNumDoors() const;
    private:
        string color;
        int numDoors;
}


Car::Car(string color, int numDoors){
    this->color = color;
    this->numDoors = numDoors;
}

string Car::getColor() const{
    return this->color;
}

int Car::getNumDoors() const {
    return this->numDoors;
}

#endif