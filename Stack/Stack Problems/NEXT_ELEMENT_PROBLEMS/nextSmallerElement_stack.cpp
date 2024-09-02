#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> answer(n , -1);
    stack<int> st;
    st.push(0);


    for(int i = 1; i < n; i++) {
        while(!st.empty() && arr[i] < arr[st.top()]) {
            answer[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return answer;
} 
int main() {
    vector<int> arr = {4 , 3 , 9 , 1 , 0 , 6 , 8 , 3 , 2};
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
cout<<endl;
    vector<int> vec = nextSmallerElement(arr);
    for(int i = 0; i < vec.size(); i++) {
        cout<<vec[i]<<"\t";
    }

    return 0;
}