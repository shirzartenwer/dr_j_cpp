#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main(){
    
    // The size of the array needs to be known at compile time. 
    // Can't obtain it in runtime, such as user entering a number.
    const int ARRAY_SIZE = 5;
    // This is declaring built-in arrays
    int my_array[ARRAY_SIZE];
    string names[]{"Dogs", "Cats", "Mice", "Elephant", "Eagle"};

    for (int i; i<=4; i++){
        my_array[i] = rand() % 10;
        cout << names[i] << endl;

    }

    // iterating through element, instead of index
    for (string name: names){
        cout << name << endl;
    }

    // can also let CPP infer the datatype 
    for (auto name: names){
        cout << name << endl;
    }
    // when you just print out an array, it actually prints the memory address
    cout << my_array <<endl;

    // when you don't initialize anything, it shouuld get you garbage data in theory.

    array<int, 5> myIntArray;

    // but when you initilaze with a bracket, it should initialize with all 0s.
    array<int, 5> myZeroArray{};

    for (int a: myIntArray){
        cout << a << endl;
    }


    for (int b: myZeroArray){
        cout << b << endl;
    }

    // but apparently in my Cpp 17, tehse two arrays are equal
    cout << boolalpha << (myIntArray == myZeroArray) << endl;


    // changing the value of the array can be directly done by referencing it
    myZeroArray[0] = 1;
    myZeroArray[1] = 2;
    myZeroArray[2] = 3;

    for (int b: myZeroArray){
        cout << b << endl;
    }

    cout << "Size of the array is: " << myZeroArray.size() << endl;
    // for the traditional way of instantiating an array, there is not size() method to get the lenght

    // int two_multiples_array[10];
    array<int, 10>two_multiples_array;

    for (int i; i <=two_multiples_array.size(); i++) {
        two_multiples_array[i] = i*2;
    }

    for (int num: two_multiples_array){
        cout << num << endl;
    }


    /*Followings are Vectors*/

    vector<int> someVec;
    vector<string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    cout <<"someVec, size: " <<someVec.size() << endl;

    anotherVec[0] = "John";
    anotherVec[1] = "Sally";
    anotherVec[2] = "Bob";

    // the following line is extending the vector
    anotherVec.push_back("Shannon");

    for (int val: someVec){
        cout << val << endl;
    }

    cout << endl;

    for (string name: anotherVec){
        cout << name << endl;
    }

    cout << "Front and back: " << endl;
    cout << "front is: " << anotherVec.front() << endl;
    cout << "back is: " << anotherVec.back() << endl; 

    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin()+3, "Natalie");
    cout << "New front is: " << anotherVec.front() << endl;
    cout << "New back is: " << anotherVec.back() << endl;

    return 0;
}