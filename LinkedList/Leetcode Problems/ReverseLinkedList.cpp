#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
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

 void print(Node* &head) {
        Node *temp = head;
        while(temp != NULL) {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
}



// Reverse linked list
void ReverseLinkedList (Node* &head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL){
        Node* forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
        head = prev;
    }
    
}

Node* ReverseLinkedListB (Node* &head) {

    if(head == NULL || head->next ==NULL) {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL){
        Node* forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
        head = prev;
    }
    
}

int getLength(Node* &head) {
    Node* temp = head;
    int length = 0;

    while(temp != NULL) {
        length++;
        temp = temp->next;
    }

    return length;

}

Node* MiddleNode(Node* &head) {


    int length = getLength(head);
    int ans = (length/2);

    Node* temp = head;
    int cnt = 0;

    while (cnt < ans){
        temp = temp->next;
        cnt++;
    }
    cout<<temp->data<<endl;
    return temp;
}



// Secound approach
// Secound approach

Node* MiddleNodeSecondApproach(Node* &head) {
    
    if(head == NULL) {
        return NULL;
    }
    else if(head->next == NULL){
        return head;
    }

    else if (head->next->next == NULL){
        return head->next;
    }

    Node* turtle = head;
    Node* rabbit = head->next;

    while (rabbit != NULL){
        rabbit = rabbit->next;
        if (rabbit != NULL){
            rabbit = rabbit->next;
        }
        turtle = turtle->next;
    }

    cout<<turtle->data<<endl;
    return turtle;
    
}


int main() {


    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    // print(head);
    // ReverseLinkedList(head);
    // print(head);

    insertAtPosition(head , tail , 2 , 20);
    insertAtPosition(head , tail , 3 , 30);
    insertAtPosition(head , tail , 4 , 40);
    insertAtPosition(head , tail , 5 , 50);
    insertAtPosition(head , tail , 5 , 60);
    
    // print(head);
    // cout<<head->data<<endl;
    // ReverseLinkedList(head);
    // print(head);
    // cout<<head->data<<endl;

    // print(head);
    // cout<<MiddleNode(head)<<endl;

    print(head);
    cout<<MiddleNodeSecondApproach(head)<<endl;




    return 0;
}