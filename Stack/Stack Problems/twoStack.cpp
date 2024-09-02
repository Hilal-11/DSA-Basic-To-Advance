#include<iostream>
using namespace std;
class twoStack {
    public: 
        int size;
        int top1;
        int top2;
        int* arr;
    twoStack(int size) {
        this->size = size;

        this->top1 = -1;
        this->top2 = size;

        arr = new int[size];
    }

    void push1(int element) {
        if(top1 - top2 > 1) {
            top1++;
            arr[top1] = element;
        }else{
            cout<<"stack overflow"<<endl;

        }
    }
    void push2(int element) {
        if(top2 - top1 > 1) {
            top2--;
            arr[top2] = element;
        }else{
            cout<<"stack overflow"<<endl;

        }
    }
    void pop1() {
        if(top1 >= 0) {
            top1--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    void pop2() {
        if(top2 < size) {
            top2++;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek1() {
        if(top1 == -1) {
            cout<<"stack is empty"<<endl;
            return -1;
        }else{
            return arr[top1];
        }
    }
    int peek2() {
        if(top2 == size) {
            cout<<"stack is empty"<<endl;
            return -1;
        }else{
            return arr[top2];
        }
    }
};


int main() {


    twoStack st(5);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push1(4);
    st.push1(5);


    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;


    return 0;
}