#include "Animal.h"
#include <string>
#include <iostream>
#include "Dog.h"
#include "Cat.h"

// NOTE: inheritence in theory also works as one children having multiple parents

int main() {

    // since Animal is now an abstrac class that has pure virtual binding, it's now allowed 
    // to have an instance of abstract class
    // Animal myAnimal("Pet", 40);
    Dog dog("Leo", 80, "Huskey");

    // Since Dog is Animal, we can use an Animal poitner pointing to the Dog instance
    // pointer from parent class can points to any instance of children class
    Animal* dogPtr = new Dog("Penny", 40, "Dashhund"); 

    cout <<"Make noises ? " << dogPtr->makeNoise() << endl;
     
    // cout <<"Animal name is: "<< myAnimal.getName() << endl;
    // cout <<"Animal weight is: "<< myAnimal.getWeight() << endl;
     

    // children instance can access parent's class's public method
    cout << "Dog's name: " << dog.getName() << endl;
    
    dog.digHole(); 

    // comparison of methods with same name in parent and child class
    // cout <<"Animal noise is: " << myAnimal.makeNoise() << endl;
    cout << "Dog's noise: " << dog.makeNoise() << endl;
    dog.chaseCat();

    cout << "What does dog eat: " << dogPtr->eat() << endl;

    delete dogPtr;
    dogPtr = nullptr;



    Animal* catPtr = new Cat("Tracy", 3.4);

    cout << "How does cat sound? :" << catPtr->makeNoise() << endl;
    // pointer casting needed when using parent class pointer to call methods 
    // that only exists in children class
    // this casting is only effective in this line, it doesn't permenantly change it to cat pointer
    ((Cat*)catPtr)->chaseMouse();

    // a newer way to cast pointer
    (reinterpret_cast<Cat*>(catPtr))->chaseMouse();

    delete catPtr;
    catPtr = nullptr;


    return 0;
}