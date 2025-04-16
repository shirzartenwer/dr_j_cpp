#include <iostream>
using namespace std;

void noConst();
//constant pointer 2 non-constant data
void cp2ncd();
void ncp2cd();
void cp2cd();


int main(){
    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;

    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    return 0;
}


void noConst(){
    // both pointer and the data can be changed
    cout << "In no const " << endl;

    int* intPtr = new int(50);
 
    cout <<"\torig value : " << *intPtr << endl;

    // this is changing data hold at the same memory addresss
    *intPtr = 100;
    cout <<"\tchange data : " <<*intPtr << endl;

    delete intPtr;

    // this is changing the address the intPtr is pointing to
    intPtr = new int(125);
    cout <<"\t new integer entirely: " << *intPtr << endl;
    
    delete intPtr;


}

// pointer is constant 
// data is not constant  
void cp2ncd(){

    cout << "In cp2ncd" << endl;

    int* const intPtr = new int(100);

    cout <<"\torig value : " << *intPtr << endl;

    *intPtr = 250;

    cout <<"\tchange data : " <<*intPtr << endl;

    delete intPtr;

    // intPtr = new int(222);

}

// pointer is not constant 
// but data is constant
void ncp2cd(){

    cout << "In ncp2d" << endl;
    const int* intPtr = new int(500);

    cout <<"\torig value : " << *intPtr << endl;

    delete intPtr;

    // changing the memory address pointed by this intPtr
    intPtr = new int(150);
    cout <<"\t new integer entirely: " << *intPtr << endl;

    delete intPtr;

    // trying to change the data then doesn't work
    // *intPtr = new int(250); 

}
void cp2cd(){
    cout << "In cp2cd" << endl;
    const int* const intPtr = new int(500);

    cout <<"\torig value : " << *intPtr << endl;

    delete intPtr;

    //Both of the following two cases doesn't work then, because both pointer and data are constant.
    // *intPtr = new int(200);
    // intPtr = new int (200);

}

void noChange(){
    cout << "In noChange" << endl;

    const double* const doublePtr = new double(1.41421);

    // *doublePtr = new double (3.1415);
    // doublePtr = new double(3.33333);

}