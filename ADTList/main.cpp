#include "ArrayList.h"
#include <iostream>

int main () {
    ArrayList myList;

    for (int i = 0; i < 25; i++){

        myList.add(i*7);
    }

    myList.printList();
    try {
        myList.set(777, 70);
    }
    catch (const std::exception& err){
        cout << err.what() << endl;

    }
    



    myList.makeEmpty();
    myList.printList();
    cout << "now ths size of my array is " << myList.size() << endl;;

    return 0;
}