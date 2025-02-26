#include <iostream>
#include <string>
using namespace std; 

int main(){
    bool isRising = true;
    bool isSunny = false; 
    bool isWarm = false;

    cout << boolalpha << isRising <<endl;
    cout << boolalpha << isSunny << endl;
    cout << boolalpha << isWarm << endl;
    
    double salesTax = 0;  // This is sales tax.


    int a = 10; 
    int b = 3; 
    int sum = a + b;
    int reminder = a % b;
    int dvision = a / b;

    sum += 10;

    cout << reminder << endl;

    cout << "Notice how the result is truncated, because it's int: " << dvision << endl;
    cout << sum << endl;
    sum--;
    cout << sum << endl;
    --sum;
    cout << sum << endl;

    int myNum = 5;
    myNum +=10;

    myNum *=2;
    myNum *=2;
    cout << myNum <<endl;
    myNum ^=2;
    cout << myNum <<endl;


    /* Notice that, if boolalpha has been called before this line,
    the boolean result will always be printed as true or false
    */

    cout << (myNum < sum) << endl;

    // logical operaters: && for and, || for or, ! for not
    cout << (isSunny && isWarm) <<endl;
    
    // a simple numebr such as 150 is constant literal
    

    // symbolic constant: HAS TO USE CAPITAL SNAKE CASE

    const double MY_AMBITION = 100000000;

    const string MY_NAME = "Arslan";

    cout << (MY_NAME == "Nurzat") << endl;






    // Take input argument
    int lunchMoney;

    cout << "Please enter the expected cost of your lunch " << endl;
    // When entering data for `cin`, whitespace is not allowed. If `cin` encounters whitespace, 
    // it stops reading input.
    cin >> lunchMoney; 

    cout << "Lunch is expected to cost " << lunchMoney << endl;

    // CRITICAL: Clear the `/n` new line character, because there is getline() called later which will take later input
    // As long as there are further input that needs to be taken in, then the previous input's leftover needs to be delt with by 
    // taking it in, or ignore it.
    // cin.ignore(); 
    //cin.get();  // cin.ignore(); aslo works


    string fullName;
    cout << "Please enter your name " << endl;
    getline(cin, fullName);


    cout << "Your full name is " << fullName << endl;


    double firstDouble;
    double secondDouble;
    double thirdDouble; 

    cout << "Please enter first double number " << endl;
    cin >> firstDouble;

    cout << "Please enter second double number " << endl;
    cin >> secondDouble;

    cout << "Please enter third double number " << endl;
    cin >> thirdDouble;

    cout << "The average number of what you entered is " << ((firstDouble+ secondDouble + thirdDouble)/3) <<endl;

    return 0;
} 