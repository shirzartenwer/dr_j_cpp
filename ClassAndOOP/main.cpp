#include <iostream>
#include <string>
#include "House.h"
using namespace std;

// if we don't pass by reference here, everytime a method from the House class is called, then this instance is copied once. It's inefficient.
void printHouseData(const House& object);

int main () {
    House myHouse;
    House yourHouse;

    // check how cumbersome the next 4 lines are, so it's totally unnecessary for constructors declaration to take reference value
    int theirHnum = 2;
    int theirWnum = 10;
    string theriWcolor = "grey";
    House theirHouse(theirHnum, theirWnum, theriWcolor);


    myHouse.printData();
    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");


    myHouse.setColor("purple");
    myHouse.printData();
    // printHouseData(myHouse);
    theirHouse.printData();
    return 0;
}

// putting a const here makes sure the print function can't use setter methods to change the object
void printHouseData(const House& object){
    cout << "The color is " << object.getColor() << endl;
    cout << "The number of stories is " << object.getNumStories() << endl;
    cout << "The number of windows is " << object.getNumWindows() << endl;
}

