#include <iostream>
using namespace std;

int main()
{
    int someInt = 150;
    // & is the address operator, getting the address of some variable
    int* somePtr = &someInt;

    cout << "some int is originally " << someInt << endl;
    //This is printing the memory address this pointer is pointing to
    cout << "pointer holds value: " << somePtr << endl;
    cout << "pointer dereferenced " << *somePtr << endl;

    *somePtr = 200;
    // The result of this line is the most confusing one
    cout <<"someInt is now: " << someInt << endl;

    double myDouble = 1.414;
    double* doublePtr = &myDouble;
    cout << "The actual value of the double pointer is " <<doublePtr << endl;
    cout << "Double pointer is pointing to the value " << *doublePtr << endl;

    cout << endl;
    cout << endl;

    // when new is used, the memory is allocate dusing heap
    // otherwise, by default it's using stack
    int* myIntPtr = new int;
    cout <<"The memory position myInPtr is pointing to is " << myIntPtr << endl;

    *myIntPtr = 123;

    cout <<"The memory position myInPtr is pointing to now is " << myIntPtr << endl;
    cout << *myIntPtr << endl;
    // if you don't delete this after allocating the pointer to another memory, then this memory will not be able to be used by the program.
    // This is called memory leak
    delete myIntPtr;

    // after deleting it and setting it to null pointers is to avoid dangling pointer
    myIntPtr = nullptr;
    // you can also test any pointer before using it, to see if it's nullptr, and it should be.

    


    bool* myBoolPtr = new bool(true);

    cout <<"The value that bool pointer points to is " << boolalpha << *myBoolPtr << endl;

    delete myBoolPtr;
    // myBoolPtr = nullptr;

    if (myBoolPtr) {
        cout << "exists" << endl;
    } else {
        cout << "doenst exist" << endl;
    }
    cout << *myBoolPtr << endl;


    // ######### INT
    myIntPtr = new int(0); // heap allocation
    cout <<"The value of int that pointer points to is " << *myIntPtr << endl;

    delete myIntPtr;
    myIntPtr = nullptr;

    if (myIntPtr) {
        cout << "exists" << endl;
    } else {
        cout << "doenst exist" << endl;
    }
    cout << *myIntPtr << endl;

    return 0;

}