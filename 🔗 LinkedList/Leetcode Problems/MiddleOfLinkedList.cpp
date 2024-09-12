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


int getlength(Node* &head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
    
}
// Approach 1
// Approach 1

Node* MiddleNode (Node* &head) {
    int length = getlength(head);
    int answer = (length / 2);
    int count = 0;
    Node* temp = head;
    while (count < answer){
        temp = temp->next;
        count++;
    }
    cout<<"Moddle = "<<temp->data<<endl;
    return temp;
    
}



// Approach 2
// Approach 2
Node* MiddleNodeSecondApproach(Node* &head) {

    if(head == NULL) {
        return NULL;
    }
    else if(head->next == NULL) {
        return head;
    }
    else if(head->next->next == NULL) {
        return head->next;
    }


    Node* t = head;
    Node* r = head->next;

    while(r != NULL) {
        r = r -> next;
        if(r != NULL) {
            r = r -> next;
        }
        t = t -> next;

    }
    cout<<"Moddle = "<<t->data<<endl;
    return t;
}
int main() {

    Node *node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtPosition(head , tail , 2 , 20);
    insertAtPosition(head , tail , 3 , 30);
    insertAtPosition(head , tail , 4 , 40);
    insertAtPosition(head , tail , 5 , 50);
    insertAtPosition(head , tail , 6 , 30);
    insertAtPosition(head , tail , 7 , 66);
    insertAtPosition(head , tail , 8 , 77);
    insertAtPosition(head , tail , 9 , 92);


    print(head);
    MiddleNode(head);
    MiddleNodeSecondApproach(head);



    return 0;
}