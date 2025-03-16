#include <iostream>
#include <array>
using namespace std;

void callMyName();
int giveMeTen();
int addTwoNumbers(int a, int b);
void changeNumeReal(int& someNum);
void someFunctionScope(int firstNum);
void modifyGlobal();
int sumArray(int array[], int b);
int sumArray(array<double, 3> doubleArray);
void sumArray(array<double, 3> doubleArray, int& sum_num);
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
    // notice how the number changed after the function call
    cout << "my num is: " << myNum << endl;

    // someFunctionScope(1);
    // someFunctionScope(1);
    // someFunctionScope(3);

    cout << "Value of counter before for loop: " << counter << endl;
    for (int i = 0; i<100; i++){
        modifyGlobal();
    }
    cout << "Value of counter after for loop: " << counter << endl;


    int myArray[5]{0, 1, 2, 3, 4};
    cout << "Sum of the array is " << sumArray(myArray, 5) << endl;

    array<double, 3>myDoubleArray{1.1, 2.2, 3.3};
    cout << "Sum of the double array is " << sumArray(myDoubleArray) << endl;

    int sum_num = 0;
    sumArray(myDoubleArray, sum_num);
    // notice how this sumArray function doesn't have return value and if you put it in cout, it will result in nullptr error
    cout << "Sum of the double array, passing by reference is " << sum_num  << endl;

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

int sumArray(int array[], int array_size){
    int sum = 0;
    for (int i=0; i<array_size; i++){
        sum = sum + array[i];
    }

    return sum;
}

// notice how this return type int, chunks up a double to become int, even if the returned variable sum was double
int sumArray(array<double, 3>doubleArray){
    double sum = 0;
    for (double num: doubleArray){
        sum += num;
    }

    return sum;
}

void sumArray(array<double, 3> doubleArray, int& sum_num){
    sum_num = sumArray(doubleArray);
}