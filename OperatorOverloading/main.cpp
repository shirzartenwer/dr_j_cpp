#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect1(10, 20);
    Rectangle rect2(50, 100);
    Rectangle rect3(10, 20);

    Rectangle resultRect = rect1 + rect2;

    cout <<"is rect1==rect3 " << boolalpha << (rect1==rect3) << endl;
    
    cout << "resultREctangle area: " << resultRect.area() << endl;

    cout << "Are rect 1 and rect 2 different rectangles? " << (rect1!=rect3) << endl;

    return 0;
}