#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include <stdexcept>
#include "List.h"
using namespace std;


class ArrayList:public List{
    public:
        // when an attirbute is constant, it needs to be initialized together with the function
        ArrayList(int s=16) : MAX_SIZE(s)
        {
            this->myArray = new int[MAX_SIZE];
            this->numElements= 0;
        };

        void add (int newEntry){
            if (numElements >= MAX_SIZE){
                out_of_range("Cannot add any more lements. List is full.");
                return ;
            }
            // adding it to the end of the array, since it's the easiest.
            this->myArray[this->numElements] = newEntry;
            this->numElements++;

        };

        void add (int newEntry, int position){
            if (numElements >= MAX_SIZE){
                throw out_of_range("Cannot add any more lements. List is full.");
                return ;
            }
            if (position < 0 || position > this->numElements){
                throw out_of_range("Poision is out of range, either too big or too small");
                return;
            }

            // moving the other elements to make space at this position
            for (int i = this->numElements; i > position; i--){
                this->myArray[i] = this->myArray[i - 1];
            }
            

        };
        void set(int newEntry, int position){
            if (position < 0 || position > this->numElements){
                throw out_of_range("Poision is out of range, either too big or too small");
                return;
            }
            // this is a replacement 
            this->myArray[position] = newEntry;;

        };

        bool contains(int entry) const{
            bool found = false;

            for (int i = 0; i < this->numElements; i++){
                if (myArray[i] == entry){
                    found = true;
                    break;
                }
            }
            return found;

        };
        int find(int entry) const {
            int index = -1;
            for (int i = 0; i < this->numElements; i++){
                if (myArray[i] == entry){
                    index = i;
                    break;
                }
            }
            return index;

        };
        int remove(int position) {
            int element = -1;
            
            if (position < 0 || position > this->numElements){
                out_of_range("Poision is out of range, either too big or too small");
                return element;
                
            }
            element = this->myArray[position];
            for (int i = position; i < numElements-1; i++){
                this->myArray[i] = myArray[i+1];
            }
            this->numElements -=1;
            return element;

        };
        void makeEmpty(){
            delete[] this->myArray;
            this->myArray = new int[MAX_SIZE];
            this->numElements = 0;
        };

        int size() const {
            return this->numElements;
            
        };
        bool isEmpty() const {
            return this->numElements ==0;
            
        };
        void printList() const {
            for (int i = 0; i < numElements; i++){
                cout << myArray[i] << endl;
            }
        };

    private:
        int* myArray;
        const int MAX_SIZE;
        int numElements;
};

#endif