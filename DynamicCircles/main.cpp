#include <iostream>
#include "Circle.h"
using namespace std;

int main (){
    int numCircles;

    cout <<"How many circles do you want to make? " << endl;
    cin>> numCircles;

    // the second * says it's a dynamic array
    // the first * says it's a dynamic array of circle pointers;

    Circle** myCircle = new Circle*[numCircles];

    for (int i = 0; i<numCircles; i++){
        double tempR;
        cout <<"Please input the radius for the " << i << " Circle." << endl;
        cin>> tempR;

        myCircle[i] = new Circle(tempR);
         
    }

    for (int i = 0; i<numCircles; i++){
        cout <<"The circumference of " << i << " Circle is:" << myCircle[i]->getCircumference() << endl;
        cout <<"The area of " << i << " Circle is:" << myCircle[i]->getArea() << endl;
        
    }

    // deleting individual circles after creating them
    for (int i=0; i<numCircles; i++){
        delete myCircle[i];
        myCircle[i] = nullptr;
    }

    // note: when deleting array poninters, add [] after the delete
    delete[] myCircle;

    return 0;
}