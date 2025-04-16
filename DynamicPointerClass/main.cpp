#include <iostream>
#include "Dog.h"
using namespace std;

int main(){
    Dog* myDogPtr = new Dog("Wilson", "German sheperd");
    Dog* yourDogPtr = new Dog("Fido", "Beagle");

    cout <<"using arrow member access" << endl;
    // -> operater is also dereferencing the pointer
    cout << myDogPtr->getBreed() << "-" << myDogPtr->getName() << endl;

    cout << endl;

    cout << "using deferencing and the dot operator" << endl;
    cout <<(*myDogPtr).getName() << " -" << (*myDogPtr).getBreed() << endl;

    delete myDogPtr;
    delete yourDogPtr;

    myDogPtr = nullptr;
    yourDogPtr = nullptr;


    // dynamic arrays
    int array_size;
    cout <<"We are going to allocate an array dynamically. Please input an integer number for size: " << endl;
    cin>> array_size;

    const int ARR_SIZE = 5;

    // the following new returns the address of the first element of the array
    // int* myArray = new int[ARR_SIZE];
    int* myArray = new int[array_size];

    for (int i=0; i < array_size; i++){
        myArray[i] = i*2;
        cout << myArray[i] << endl;

    }

    delete[] myArray;
    myArray = nullptr;



    return 0;
}