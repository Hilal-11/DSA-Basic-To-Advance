#include<iostream>
#include<stack>
using namespace std;

void deleteAtBottom(stack<int> &st) {

    stack<int> temp;

    while(!st.empty()){
        int curr = st.top();
        temp.push(curr);
        st.pop();
    }

    temp.pop();

    while(!temp.empty()) {
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
    

}
void deleteAtPosition(stack<int> &st , int idx) {

    int n = st.size();
    int count = 0;
    stack<int> temp;

    while(count < n-idx) {
        int curr = st.top();
        temp.push(curr);
        st.pop();
        count++;
    }

    st.pop();

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
    deleteAtBottom(st);
    deleteAtPosition(st , 4);

    while(!st.empty()) {
        cout<<st.top()<<"\t";
        st.pop();
    }

    return 0;
}