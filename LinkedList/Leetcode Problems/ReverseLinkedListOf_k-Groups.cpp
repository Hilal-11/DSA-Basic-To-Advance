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


void insertAtHead(Node* &head , int value) {

        Node* temp = new Node(value);
        temp->next = head;
        head = temp;

}
void insertAtTail(Node* &tail , int value) {

        Node* temp = new Node(value);
        tail->next = temp;
        tail = temp;

}
void insertAtPosition(Node* &head , Node* &tail , int position , int value) {
    if(position == 1) {
        insertAtHead(head , value);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position-1) {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail , value);
        return;
    }


    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
    
}


void print(Node *&head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main( ) {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtPosition(head , tail , 2 , 20);
    insertAtPosition(head , tail , 3 , 30);
    insertAtPosition(head , tail , 4 , 40);
    insertAtPosition(head , tail , 5 , 50);
    insertAtPosition(head , tail , 6 , 60);

    print(head);

    return 0;
}