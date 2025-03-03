#include <iostream>
#include <cmath>
using namespace std;


int getResult (int num1, int num2);
string getResult(string str1, string str2);

int main() {


    cout << "Result from int function is " << getResult(5, 10) << endl;
    cout << "Result from string function is " << getResult("Natalie", "Nora") << endl;
    //These code works and leads to ultimate confusion 

    cout << log2(512) << endl;
    return 0;
}

int getResult (int num1, int num2) {
    return num1 + num2 ;
}

string getResult(string str1, string str2){
    return str1 + " " + str2;
}