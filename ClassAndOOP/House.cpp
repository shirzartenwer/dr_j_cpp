#include "House.h"
#include <iostream>

// This is  a no argument constructor.
House::House() {
    this -> numStories = 1;
    this -> numWindows = 2;
    this ->color = "Green";
}
House::House(int& numStories, int& numWindows, string& color) {
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color=color;

}

// This is a destructor
House::~House()
{
    cout << "The " << color << "house with " << numWindows << " windows " << "is being destoryed." << endl;
}

void House::setNumStories(int numStories)
{   
    //"This" keyword is to guarantee the attribute name can be the same with parameter name
    this->numStories = numStories;

}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}
// The const keywords means this method cannot change any  attribute
int House::getNumStories() const {
    return numStories;
}

int House::getNumWindows() const {
    return numWindows;
}

string House::getColor() const {
    return color;
}

void House::printData() const {
    cout << "The color of the house is " << color << endl;
}