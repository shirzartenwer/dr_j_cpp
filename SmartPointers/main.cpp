#include <iostream>
#include <memory>
using namespace std;

int main() {
    // no need to delete smart pointers, because memory is managed for you
    
    

    const int ARR_SIZE = 5;

    //C++ 11 standord: unique_ptr<double> myDubPtr(new double);
    //from C++ 14 on, following is recommneded:

    unique_ptr<double> myDubPtr = make_unique<double>();
    auto myArray = make_unique<int[]>(ARR_SIZE);

    *myDubPtr = 3.14;

    cout << "pointer value: " << *myDubPtr << endl;

    for (int i =0; i <ARR_SIZE; i++){
        myArray[i] = i*2;

    }

    for (int i = 0; i< ARR_SIZE; i++){
        cout << myArray[i] << endl;
    }

    // smart pointers owns the object they point to. 
    // Other pointers can't point to the same object.
    // except when explicitly using the move() methods 
    // to move the ownership
    
    // So directly assigining otherPtr like the following doesn't work
    // unique_ptr<double> otherPtr = myDubPtr;

    // but you can move the pointer 
    unique_ptr<double>newPtr = move(myDubPtr);

    cout << "New pointer is pointing to" <<  *newPtr << endl;
}