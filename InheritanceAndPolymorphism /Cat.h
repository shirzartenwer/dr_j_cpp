#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Cat:public Animal
{
    public:
        Cat(string name, double weight);
        ~Cat();
        string makeNoise() const;
        string eat() const;
        void chaseMouse() const;

};

#endif