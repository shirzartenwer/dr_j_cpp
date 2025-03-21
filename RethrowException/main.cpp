#include <iostream>
#include <string>
using namespace std;

void processPositive(int num);
void doSomething(int num);

int main() {

    // Note that if you don't use try and catch on this level
    // even though there are try and catch in the function that's called here,
    // it won't catch the exception. Essentially each throw from a lower level, requires a catch at a high level function
    try {
    // note that: here if one line throws exception, all the following lines in this block is skipped
        doSomething(-10);
        doSomething(105);
    }
    catch(const invalid_argument& err){
        cout << "Main says there is a problem" << endl;
        cerr << err.what() << endl;
    }
    catch(const out_of_range& err){
        cout << "Main says there is a out of range problem" << endl;
        cerr << err.what() << endl;
    }
    // check the sequence of the messages printed out in the console
    return 0;
}

void processPositive(int num){
    cout << "This is a postiive integer processor" << endl;
    if(num >=0 && num <=100){
        cout << "The integer is " << num << endl;
 
    } else if (num<0) {
        cout << "Process positive says there is a problem" << endl;
        throw invalid_argument("Negative number passed in.");
    } else if (num >100){
        cout << "Process positive says there is another kind of problem" << endl;
        throw out_of_range("Number passed in is greater than 100.");
    }


}

void doSomething(int num){

    try {
        processPositive(num);
        cout <<"Processing the positive number worked! " << endl;
    }
    catch (const invalid_argument& err) {
        cout << "Do something is going to throw an exceptoin" << endl;
        throw;
    }
    catch (const out_of_range& err) {
        cout << "Do something is going to throw an exceptoin for out of range problem" << endl;
        throw;
    }
}