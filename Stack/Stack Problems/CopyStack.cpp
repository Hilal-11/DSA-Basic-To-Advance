#include<iostream>
#include<stack>
using namespace std;

// stack<int> copyStack(stack<int> &st ) {
//     stack<int> temp;
//     while(!st.empty()) {
//         int val = st.top();
//         temp.push(val);
//         st.pop();
//     }
//     stack<int> result;
//     while(!temp.empty()) {
//         int val = temp.top();
//         result.push(val);
//         temp.pop();
//     }

//     return result;
// }

int main() {

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;


    stack<int> temp;
    for(int i = 0; i < st.size(); i++) {
        int val = st.top();
        temp.push(val);
        st.pop();
    }
    cout<<temp.top()<<endl;

    stack<int> copyStack;
    for(int i = 0; i < temp.size(); i++) {
        int val = temp.top();
        copyStack.push(val);
        temp.pop();
    }

    cout<<copyStack.top()<<endl;



    return 0;
}