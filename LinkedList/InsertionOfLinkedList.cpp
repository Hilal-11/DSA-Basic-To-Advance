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
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
   
};


// Traverse a LinkedList
// Traverse a LinkedList

 void printLinkedList(Node* &head) {
        Node *temp = head;
        while(temp != NULL) {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
}


// Insertion in LinkedList
// Insertion in LinkedList

void insert(Node* &tail , int value) {
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

// Insertion on head in LinkedList
// Insertion on head in LinkedList
void insertAtHead(Node * &head , int value) {
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;
}



// Insertion on Middle/Between in LinkedList
// Insertion on Middle/Between in LinkedList

void insertAtMiddle(Node* &head , Node* &tail , int position , int value) {

    if(position == 1) {
        insertAtHead(head , value);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count != position-1){
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL){
       insert(tail , value);
       return;
    }
    

    Node *newElm = new Node(value);
    newElm->next = temp->next;
    temp->next = newElm;

}   

// Delection on LinkedList
// Delection on LinkedList


void DelectionAtPosition(int position , Node* &head) {
    if(position == 1){
        Node* temp = head;
        head = head->next;

    // Memory De-Allocation  (Memory Free using Destructor)
    // Memory De-Allocation  (Memory Free using Destructor)
        temp->next = NULL;
        delete temp;
    }
    else{

        Node* prev = NULL;
        Node* curr = head;
        int count = 1;

        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}




int main() {

    Node *ll = new Node(10);
    Node *head = ll;
    Node *tail = ll;


    cout<<ll->data<<endl;
    insertAtHead(head , 20);
    printLinkedList(head);
    insertAtHead(head , 15);
    printLinkedList(head);
    insert(tail , 30);
    printLinkedList(head);
    insert(tail , 40);
    insert(tail , 50);
    insert(tail , 60);
    printLinkedList(head);
    insertAtMiddle(head , tail , 8 , 35);
    printLinkedList(head);

    cout<<endl;
    // cout<<"Head = "<<head->data<<endl;
    // cout<<"Tail = "<<tail->data<<endl;

    DelectionAtPosition(1 , head);
    DelectionAtPosition(5 , head);

    printLinkedList(head);

    DelectionAtPosition(6 , head);
    printLinkedList(head);
    


    return 0;


}