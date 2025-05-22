#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight){
    // NOTE: the following 2 lines are not needed anymore because of inheritence
    // this->name = name;
    // this->weight= weight;
    this->breed = breed; 
}; 

string Dog::getBreed() const {
    return breed;

};

void Dog::digHole() const {
    cout <<"A hole is digged" << endl;
};

string Dog::makeNoise() const {
    return "Wuuuuuf";
}

void Dog::chaseCat() const {
    cout << "Here, kitty kitty" << endl;
}

string Dog::eat() const {
    return "I love eating dog food.";
}