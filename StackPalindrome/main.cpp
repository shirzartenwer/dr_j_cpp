#include <iostream>
#include <stack>
#include <string>
using namespace std;

void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string& origString);

int main(){
    string origin = "civic";
    printResult(origin);
    return 0;
}

void storeReverse(string origString, stack<char>& reverseStack){
    for (char c : origString){
        reverseStack.push(c);
    }
}

bool isPalindrome(string  origString){
    stack<char> reverseStack;
    storeReverse(origString, reverseStack);

    for (size_t i = 0; i < origString.length(); ++i){
        if (origString[i] != reverseStack.top()){
            return false;
        }
        // The stack pop in C++ returns nothing
        reverseStack.pop();
    }
    return true;
}

void printResult(string& origString){
    if (isPalindrome(origString)){
        cout <<"It is a valid Palindrome" << endl;
    } else {
        cout <<"It's not." << endl;
    }
}