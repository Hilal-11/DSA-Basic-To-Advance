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

class stack {
    public :
    Node *head;
    int capacity;
    int currSize;
      
    stack(int capacity) {
        this->capacity = capacity;
        this->head = NULL;
        this->currSize = 0;
    }

    // stack functions
    // stack functions

void push(int value) {
    if (capacity == currSize){
        cout<<"overflow"<<endl;
    }
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    currSize++;   
}

int pop() {
    if(this->head == NULL) {
        cout<<"Uderflow"<<endl;
        return -1;
    }
    Node* newHead = head->next;
    head->next = NULL;
    int popValue = head->data;
    head = newHead;
    return popValue;
    currSize--;

}
bool isEmpty(){
    if(head == NULL) {
        return true;
    }else{
        return false;
    }
}

bool isFull() {
    if(currSize == capacity) {
        return true;
    }else{
        return false;
    }
}

int top() {
    if(head == NULL) {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return head->data;
}

int size() {
    return currSize;
}


};


int main() {

    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    cout<<st.size()<<endl<<endl;

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;





    return 0;
}