#include <iostream>
using namespace std;

void callMyName();
int giveMeTen();
int addTwoNumbers(int a, int b);
void changeNumeReal(int& someNum);

int main() {
    callMyName();
    // the actual value passed to the function when function is called, is called arguments
    // the input parameter in the function definition takes is called parameter
    cout << addTwoNumbers(5, giveMeTen()) << endl;




    // pass by value and pass by reference

    //pass by refeence 

    int myNum = 10;
    changeNumeReal(myNum);
    cout << "my num is: " << myNum << endl;

    return 0;
}


void callMyName(){
    cout << "My name is John" << endl;
}

int giveMeTen(){
    return 10;
}

int addTwoNumbers(int a, int b){
    return a+b;
}

void changeNumeReal(int& someNum){
    someNum = 100;
}