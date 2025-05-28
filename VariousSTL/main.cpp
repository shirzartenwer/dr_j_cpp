#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;


void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);

int main(){

    map<string, string> contacts;
    contacts["John Baugh"] = "313 - 555 - 5555";
    contacts["Bob Robinson"] = "734 - 555- 5050";

    // for (pair<string, string> element: contacts) is the usual way
    // the following way is more succint 
    for (auto element:contacts){

        cout << element.first << "= " << element.second << endl;
    }

    vector<int> myVector;
    fillVector(myVector);
    printVector(myVector);
    countFives(myVector);

    cout << "Replacing 5s with 99s" << endl;
    replace(myVector.begin(), myVector.end(), 5, 99);
    countFives(myVector);
    printVector(myVector);

    sort(myVector.begin(), myVector.end());
    printVector(myVector);


    return 0;
}


void fillVector(vector<int>& myVector){
    //sEED
    srand(time(nullptr));
    int temp;
    
    for (int i=0; i < 20; i++){
        temp = rand() % 5 + 1;
        myVector.push_back(temp);
    }
};
void printVector(const vector<int>& myVector){

    for (int element: myVector){

        cout << "The current element is " << element << endl;
    }

};
void countFives(const vector<int>& myVector){
    int numFives = count (myVector.begin(), myVector.end(), 5);
    cout << "number of fives: " << numFives << endl;

};