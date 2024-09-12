#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor 
    ~Node() {
        int value = this->data;
        if (this->next == NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory Free for Node "<<value<<endl;
        
    }
};

void print(Node* &head) {
    Node *temp = head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;   
}

void insertAtTail(Node* &tail , int value) {
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

void insertAtHead(Node* &head , int value) {
    Node *temp = new Node(value);

    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int position , int value) {
    if (position == 1){
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
        insertAtTail(tail , value);
        return;
    }

    Node *newNode = new Node(value); 
    newNode->next = temp->next;
    temp->next = newNode;
    
    
}


// Length of LinkedList
// Length of LinkedList

int lengthOfLinkedList(Node* &head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count = count +1;
        temp = temp->next;
    }
    return count;
}


// Delection on Linked List
// Delection on Linked List


void delectionAtPosition(int position , Node* &head){ 
    if(position == 1) {
        Node *temp = head;
        head = head->next;
    
        // Free the Momery
        temp->next = NULL;
        delete temp;
    }

    else{
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
       
        // Free The Memory
         curr->next = NULL;
         delete curr;


    }
}

int main() {

    Node *linkedList = new Node(10);
    Node *head = linkedList;
    Node *tail = linkedList;
    // cout<<linkedList->data<<endl;
    // cout<<linkedList->next<<endl;
    print(head);

    insertAtTail(tail , 20);
    print(head);
    insertAtHead(head , 8);
    print(head);
    insertAtPosition(head , tail , 1 , 100);
    insertAtPosition(head , tail , 2 , 20);
    insertAtPosition(head , tail , 3 , 99);
    insertAtPosition(head , tail , 6 , 77);

    print(head);
    // cout<<lengthOfLinkedList(head);

    delectionAtPosition(1 , head);
    print(head);
    delectionAtPosition(4 , head);
    print(head);
    delectionAtPosition(5 , head);
    print(head);





    return 0;

}
