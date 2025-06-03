#include "Alien.h"
#include <iostream>
using namespace std;

int main(){
    Alien alien1(10, 20, 'M');
    Alien alien2(10, 15, 'F');

    Alien child = alien1 + alien2; 

    cout << boolalpha << (child == alien1) << endl;

    return 0;
}