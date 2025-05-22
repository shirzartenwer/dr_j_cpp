#ifndef DOG_H
#define DOG_H

#include <string.h>
#include "Animal.h"
using namespace std;

// public inheritence
class Dog:public Animal
{
    public:
        Dog(string name, double weight, string breed);
        string getBreed() const;
        void digHole() const;
        // next line is overRiding the parent methods
        // difference between overloading and overRiding:
        // overriding needs to have exact same function signature (name, arguments)
        // overloading just need to have the same function name
        // overiding is only for class inheritence
        string makeNoise() const;
        void chaseCat() const;
        string eat() const;

    private:
        string breed;

};


#endif