#include <iostream>
#include "Car.hpp"
#include <memory>
using namespace std;

int main(){
    string color = "red";
    int numDoors = 5;
    auto myCar = make_unique<Car>(color, numDoors);

 
    cout << "Number of doors on the current car object is " << myCar->getNumDoors() << endl;
    cout << "Color of the current car is " << myCar->getColor() << endl;
    return 0;
}

// Smart pointer is easy but less memory efficient since there is a very
// small overhead needed to manage the memory overhead 
