#include <string>
#include <iostream>
#include "swaper.hpp"
using namespace std;


template <class T>
T getGreater(T a, T b);

int main(){
    // Using template for class
    Swapper<int> intSwapper(2,5);
    Swapper<string> strSwapper("wommon", "cords");



    // Using template for functions
    string string_a = "wommon";
    string string_b = "cords";

    double greaterDob = getGreater(9.8181, 2.141);
    int greaterInt = getGreater(2, 5);
    string greaterString = getGreater(string_a, string_b);

    cout << greaterDob << endl;
    cout << greaterInt << endl;
    cout << greaterString << endl;


    cout <<"Testing the swapper" << endl;
    cout << intSwapper.getFirst() << endl << intSwapper.getSecond() << endl;
    cout << endl << endl;


    intSwapper.swap();
    cout <<"Result after the swap" << endl;
    cout << intSwapper.getFirst() << endl << intSwapper.getSecond() << endl;


 

    return 0;
}

template<class T>
T getGreater(T a, T b){
    if (a>b){
        return a;
    }
    return b;
}