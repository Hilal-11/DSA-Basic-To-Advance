#include<iostream>
using namespace std;

class Node {
    public :
        int data;
        Node* prev;
        Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {

        int value = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data = "<<value<<endl;

    }

};

void printLinkedList(Node* &head) {
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;   
}


                                // Insertion On Doubly-Linkedlist
                                // Insertion On Doubly-Linkedlist


void insertAtHead(Node* &head ,  int value) {

    // Empty list
    if (head == NULL){
        Node* temp = new Node(value);
        head = temp;
    }
    
    Node *temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail ,  int value) {

    // Empty list
    if (tail == NULL){
        Node* temp = new Node(value);
        tail = temp;
    }

    Node *temp = new Node(value);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


void insertAtPosition(Node* &head , Node* &tail , Node* &prev , int position ,  int value) {

   if (position == 1){
    insertAtHead(head , value);
    return;
   }


   Node* temp = head;

   int count = 1;
   while (count < position-1){
    temp = temp->next;
    count++;
   }

   if (temp->next == NULL){    
    insertAtTail(tail ,   value);
    return;
   }

   Node* newNode = new Node(value);

   newNode->next = temp->next;
   temp->next->prev = newNode;
   temp->next = newNode;
   newNode->prev = temp;
   
}


                                        // Delection on Doubly LinkedList
                                        // Delection on Doubly LinkedList

void DelectionAtPosition(int position , Node* &head) {

    if (position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;


        temp->next = NULL;
        delete temp;



    }else{
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }   

        curr->prev = NULL;
        prev->next = curr->next;
        // curr->next->prev = prev;

        curr->next = NULL;
        delete curr; 
    }

    

    
    
    

}


int main() {

    Node *node1 = new Node(100);

    Node* head = node1;
    Node* prev = node1;
    Node* tail = node1;

    printLinkedList(head);

    insertAtHead(head  , 88);
    insertAtHead(head  , 50);
    printLinkedList(head);
    insertAtTail(tail ,   101);
    printLinkedList(head);

    insertAtPosition(head , tail , prev ,  1 , 19);
    printLinkedList(head);

    insertAtPosition(head , tail , prev ,  3 , 199);
    printLinkedList(head);

    insertAtPosition(head , tail , prev ,  6 , 99);
    printLinkedList(head);

    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl<<endl;
// Delection

    // DelectionAtPosition(head  , 1);
    // printLinkedList(head);

    // cout<<"head = "<<head->data<<endl;
    // cout<<"tail = "<<tail->data<<endl;

    // DelectionAtPosition(head  , 1);
    // printLinkedList(head);

    // DelectionAtPosition(1 , head);
    printLinkedList(head);
    DelectionAtPosition(2 , head);
    printLinkedList(head);
    DelectionAtPosition(6 , head);
    printLinkedList(head);
    DelectionAtPosition(3 , head);
    printLinkedList(head);


    DelectionAtPosition(1 , head);
    printLinkedList(head);

  













    return 0;
} 