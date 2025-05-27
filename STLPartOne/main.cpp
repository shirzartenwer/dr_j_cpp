#include <iostream>
#include <deque>
using namespace std;


void printDeque(deque<int> deck);
int main(){
    deque<int> myDeck;
    
    myDeck.push_front(1);
    myDeck.push_front(2);
    myDeck.push_back(5);
    myDeck.push_back(10);

    // the correct sequence print out should be 2, 1, 5, 10
    printDeque(myDeck);

    return 0;
}

void printDeque(deque<int> deck){
    for (int num: deck){

        cout << num << endl;
    }
    cout << endl;

}

