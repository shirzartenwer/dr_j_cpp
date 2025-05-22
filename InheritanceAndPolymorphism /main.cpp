#include "Animal.h"
#include <string>
#include <iostream>
#include "Dog.h"

// NOTE: inheritence in theory also works as one children having multiple parents

int main() {
    Animal myAnimal("Pet", 40);
    Dog dog("Leo", 80, "Huskey");

    // Since Dog is Animal, we can use an Animal poitner pointing to the Dog instance
    // pointer from parent class can points to any instance of children class
    Animal* dogPtr = new Dog("Penny", 40, "Dashhund"); 

    cout <<"Make noises ? " << dogPtr->makeNoise() << endl;
     
    cout <<"Animal name is: "<< myAnimal.getName() << endl;
    cout <<"Animal weight is: "<< myAnimal.getWeight() << endl;
     

    // children instance can access parent's class's public method
    cout << "Dog's name: " << dog.getName() << endl;
    
    dog.digHole(); 

    // comparison of methods with same name in parent and child class
    cout <<"Animal noise is: " << myAnimal.makeNoise() << endl;
    cout << "Dog's noise: " << dog.makeNoise() << endl;
    dog.chaseCat();

    delete dogPtr;
    dogPtr = nullptr;

    // Static (Early) binding VS late binding

    return 0;
}