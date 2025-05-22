#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string name, double weight):Animal(name, weight){};
Cat::~Cat(){};
string Cat::makeNoise() const {
    return "Meow!";
};
string Cat::eat() const{
    return "Only cat food please.";
};

void Cat::chaseMouse() const {
    cout << "I am chasing a mouse!"  << endl;
};