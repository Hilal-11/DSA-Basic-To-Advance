#include<iostream>
#include<stack>
using namespace std;

// INSERT AT BOTTOM IN STACK
// INSERT AT BOTTOM IN STACK

void insertAtBottom(stack<int> &st , int element) {

    stack<int> temp;
    while(!st.empty()) {
        int val = st.top();
        temp.push(val);
        st.pop();
    }

    st.push(element);
    while(!temp.empty()) {
        int val = temp.top();
        st.push(val);
        temp.pop();
    }

}   

// INSERT AT POSITION IN STACK
// INSERT AT POSITION IN STACK

void insertAtPosition(stack<int> &st , int idx , int element) {

    int n = st.size();
    stack<int> temp;
    int count = 0;

    while(count < n-idx) {
        int curr = st.top();
        temp.push(curr);
        st.pop();
        count++;
    }

    st.push(element);

    while(!temp.empty()) {
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }

}   


int main() {

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtBottom(st , 100);
    insertAtBottom(st , 200);
    insertAtPosition(st , 4 , 19);




    while (!st.empty())
    {
        cout<<st.top()<<"\t";
        st.pop();
    }
    

    return 0;
}