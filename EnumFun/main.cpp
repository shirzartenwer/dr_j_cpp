#include <iostream>
using namespace std;

int main () {

    enum Directions{up, down, left, right};

    Directions myDirection = right;
    // the value printout of enum is their integer index in the ENUM
    cout << myDirection << endl;

    return 0;
}