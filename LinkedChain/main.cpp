#include "Node.h"
#include <iostream>
using namespace std;

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node* head);

int main() {
    Node* theHead;

    theHead = createChain();
    printChain(theHead);
    deleteChain(theHead);



    return 0;
}

Node* createChain(){
    Node* head = nullptr;

    for (int i =0; i< 25; i++){
        head = new Node(i, head);
    }

    return head;
}

void deleteChain(Node*& head){
    Node* nodeToDelete;

    while(head!=nullptr){
        nodeToDelete = head;
        head = head->getNext();
        delete nodeToDelete;
        nodeToDelete = nullptr;
    }


}

void printChain(Node* head){
    int num = 0;
    while (head != nullptr){
        cout << head->getData() << endl;
        head = head->getNext();
        num +=1;
    }
    cout << "There is " << num << " number of node in the linkedChain" << endl;

    delete head;
    head = nullptr;

}