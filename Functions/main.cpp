#include <iostream>
using namespace std;

void callMyName();
int giveMeTen();
int addTwoNumbers(int a, int b);
void changeNumeReal(int& someNum);
void someFunctionScope(int firstNum);
void modifyGlobal();

// since this variable is defined outside main, it's accessible everywhere in this file
double globalDouble = 1.41421;
int counter = 0;

int main() {
    callMyName();
    // the actual value passed to the function when function is called, is called arguments
    // the input parameter in the function definition takes is called parameter
    cout << addTwoNumbers(5, giveMeTen()) << endl;




    // pass by value and pass by reference

    //pass by refeence 

    int myNum = 10;
    changeNumeReal(myNum);
    // cout << "my num is: " << myNum << endl;

    // someFunctionScope(1);
    // someFunctionScope(2);
    // someFunctionScope(3);

    cout << "Value of counter before for loop: " << counter << endl;
    for (int i = 0; i<100; i++){
        modifyGlobal();
    }
    cout << "Value of counter after for loop: " << counter << endl;

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

void someFunctionScope(int firstNum) {
    cout << "The firstNum that's the function argument is " << firstNum << endl;

    int insideNum = 10;
    cout << "The inside num is " << insideNum << endl;
    cout << "The gloal double is " << globalDouble << endl;

    // this variable has lifetime of this program but only accessible inside this function
    // the Declaration of this variable and initialization: giving it the value 500, has to be done in the same line
    static int aStatic = 500;

    insideNum++;
    aStatic++;

    cout << "Notice the difference between following two numbers: "<< endl;
    cout << "insideNum is: " << insideNum << " aStatic is " << aStatic << endl;
    // so notice how the aStatic number keep increasing when this function has been 
    // called severl times in the program. But the inside num is always destroyed 
    // immediately after each function call.

}

void modifyGlobal(){
    counter++;
}