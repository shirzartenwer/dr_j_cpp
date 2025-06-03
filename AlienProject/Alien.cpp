#include "Alien.h"
#include <cstdlib>
#include <ctime> 
using namespace std;


Alien::Alien(int weight, int height, char gender){
    this->weight = weight;
    this->height = height;
    this->gender = gender;

};

int Alien::getWeight() const{
    return this->weight;
};

int Alien::getHeight() const{
    return this->height;
};


char Alien::getGender() const{
    return this->gender;
};

int Alien::getPriestige() const{
    int genderValue;
    if (this->gender == 'F'){
        genderValue = 3;
    } else {
        genderValue = 2;
    }
    return this->weight * this->height * genderValue; 
};

Alien Alien::operator+(const Alien& other) const{
    srand(time(nullptr));
    int randNum = rand() % 10 + 1;
     
    char newGender; 
    int newWeight = (this->weight+other.weight) / 2;
    int newHeight = (this->height+other.height) / 2;
    if (randNum <=3){
        newGender = 'F';
    } else {
        newGender = 'M';
    }

    return Alien(newWeight, newHeight, newGender);
};


bool Alien::operator==(const Alien& other) const {
    return this->getPriestige() == other.getPriestige();
};

bool Alien::operator!=(const Alien& other) const{
    return this->getPriestige() != other.getPriestige();
};


bool Alien::operator>(const Alien& other) const{
    return this->getPriestige() > other.getPriestige();
};

bool Alien::operator>=(const Alien& other) const{
    return this->getPriestige() >= other.getPriestige();
};

bool Alien::operator<(const Alien& other ) const{
    return this->getPriestige() < other.getPriestige();
};

bool Alien::operator<=(const Alien& other) const{
    return this->getPriestige() <= other.getPriestige();
};

void Alien::operator= (const Alien& other){
    this->height = other.height;
    this->weight = other.weight;
    this->gender = other.gender;
};