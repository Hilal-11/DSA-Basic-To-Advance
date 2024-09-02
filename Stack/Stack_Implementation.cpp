#include<iostream>
using namespace std;

class stack {
    public : 
        int size;
        int* array;
        int top;
    stack (int size) {
        this->size = size;
        array = new int[size];
        top = -1;

    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            array[top] = element;

        }
        else{
            cout<<"Stack Overflow";
        }
    }

    void pop() {
        if(top >= 0 && top < size) {
            top--;
        }   
        else{
            cout<<"Stack Underflow";

        }
    }

    int peek() {
        if(top == -1) {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return array[top];
        }
    }

    bool isEmpty () {
        if(top >= 0) {
            return false;
        }else{
            return true;
        }
    }
    bool isFull() {
        if(top >= 0) {
            return true;
        }else{
            false;
        }
    }

};

int main() {
     
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    if(st.isEmpty()){
        cout<<"true";
    }else{
        cout<<"false";
    }

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"true";
    }else{
        cout<<"false";
    }









    return 0;
}