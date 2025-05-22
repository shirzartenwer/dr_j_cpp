#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
using namespace std;

class Animal {
    public:
        Animal(string name, double weight);
        string getName() const;
        void setName(string name);
        double getWeight() const;
        void setWeight(double weight);
        // a pure virtual function
        // it dictates what methods must be implemented by children class
        virtual string makeNoise() const = 0;
        virtual string eat() const = 0;
        virtual ~Animal();
    
    private:
        string name;
        double weight;

};

#endif