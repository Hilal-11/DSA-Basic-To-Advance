#include<iostream>
using namespace std;

class Node {
    public : 
        int data;
        Node *next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }


    // Destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory free for node with data = "<<value<<endl;
    }
   
};



// Insertion on Circular Linkedlist
// Insertion on Circular Linkedlist

void insert(Node* &tail , int element , int value) {
    if(tail == NULL) {
        Node* newNode = new Node(value);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;

        while(curr->data != element) {
            curr = curr->next;

        }

        Node* temp = new Node(value);
        temp->next = curr->next;
        curr->next = temp;
     } 
}


// Traversing on Circular Linkedlist
// Traversing on Circular Linkedlist

void print(Node* tail) {

    Node* temp = tail;

    do{
        cout<<tail->data<<"\t";
        tail = tail->next;
    }
    while(tail != temp);
      
      cout<<endl;
}




// Delectio on Circular Linkedlist
// Delectio on Circular Linkedlist


int main() {


    Node* tail = NULL;
    //empty list
    insert(tail , 1 , 100);
    print(tail);
    insert(tail , 100 , 200);
    print(tail);
    insert(tail , 200 , 300);
    print(tail);

    insert(tail , 200 , 19);
    print(tail);


    insert(tail , 100 , 190);
    print(tail);


    

    return 0;
}

