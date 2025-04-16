#include <iostream>
#include "Rectangle.h"
using namespace std;

int main (){
    const int ARRAY_SIZE = 5;
    int array[ARRAY_SIZE];

    Rectangle* rectPtr[ARRAY_SIZE];

    rectPtr[0] = new Rectangle(5, 6);
    rectPtr[1] = new Rectangle(3, 4);
    rectPtr[2] = new Rectangle(7, 8);

    for (int i = 0; i<ARRAY_SIZE; i++){
        cout << "The area of the rectangle " << i << " is " << rectPtr[0]->area() << endl;
        cout << "The perimeter of the rectangle " << i << " is " << rectPtr[0]->perimeter() << endl;
    }

        cout << "size of Rectangle obj " << sizeof(Rectangle) << endl;
    for (int i = 0; i<ARRAY_SIZE; i++){
        cout << rectPtr[i] << endl;
        delete rectPtr[i];
        rectPtr[i] = nullptr;
        cout << rectPtr[i] << endl;
    }


    return 0;
}