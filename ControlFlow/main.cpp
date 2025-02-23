#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main () {

    // int age = 15;

    // if (age > 16) {
    //     cout << "You can drive. " << endl;
    // } else {
    //     cout << "You cannot drive." << endl;
    // }


    // char grade;
    // cout << "Please enter a letter grade:" <<endl;
    // cin >> grade;

    // switch (grade){
    //     case 'A':
    //     case 'a':
    //         cout << "Congrats"<< endl;
    //         break;
    //     case 'B':
    //     case 'b':
    //         cout << "Keep working." << endl;
    //         break;
    //     default:
    //         cout << "Please only enter A or B" << endl;
    // }

    // int count = 0;
    // while (count < 5) {
    //     cout << count << endl;
    //     count++;
    // }

    // cout<< endl << endl;

    // Notice how this do-while loop will execute once regardless of the condition
    // int count2 = 5;
    // do {
    //     cout<< count2 << endl;
    //     count2++;
    // } while (count2<5);



    // priming read;
    // int input;
    // cout << "Please enter a non-negative integer to conitnue ";
    // cout << "or negative if you want to quit." << endl;

    // cin >> input;

    // // Notice the garbage value you will encounter here, by initating an int without giving it anything.
    // int total = 0; 
    // cout <<"total is" << total << endl;

    // while (input >=0) {
    //     total += input;
        
    //     cout << "Please enter a non-negative integer to conitnue ";
    //     cout << "or negative if you want to quit." << endl;
    
    //     cin >> input;

    // }

    // cout << "Total is" << total << endl;



    // Use random library for cryptographically safe randome numbers
    // nullptr tells the function to use current system time, returns 1970.01.01.00:00:00
    // epoch time
    srand(time(nullptr));

    int val = rand() %10; // vall should be >=0, <10;

    int val2 = rand() % 10 +1 ; // vall should be >=1, <=10

    cout << val << endl;

    cout << val2 << endl;

    /*If you omit a `return` statement in `int main()`, modern C++ standards 
    (C++11 and later) automatically insert a `return 0;` at the end of the function. 
    This ensures compatibility with older code that might not explicitly 
    include a `return` statement.*/

    for ( int i=0; i<=10; i++){
        int val = rand() % 6 +1; 
        cout << val << endl;

    }

    for (int i=0; i<=50; i++) {
        if (i%2 == 0){
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }

    return 0;

}