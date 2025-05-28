#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"
using namespace std;

int main(){
    RectangleHelper helper;
    Rectangle r1(10, 25);
    cout << "Before changing the data, the area of the rectangle is " << r1.area() << endl;

    changeData(r1);
    cout <<"Afer changing the data, the area of the rectangle is " << r1.area() << endl;

    helper.modifyRectangle(r1);

    cout << "Now after another modification, it's " << r1.area() << endl;


    return 0;
}

// since this was a friend function, it can access non-public data in Rectangle class
// including non public data and methods
void changeData(Rectangle& rect){
    rect.width = 100;
    rect.length = 100;
}