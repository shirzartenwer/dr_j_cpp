#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        };

        void setData(int data){
            this->data = data;
        };
        void setNext(Node* next){
            this->next = next;
        };
        int getData() const{
            return this->data;
        };

        Node* getNext(){
            return this->next;
        }




    private:
        int data;
        Node* next;

};


#endif