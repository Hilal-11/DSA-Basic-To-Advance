#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void reverseAnArray(vector<int> &arr , int n) {
    int i = 0;
    int j = n-1;

    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

vector<int> prevSmallerElement(vector<int> &arr) {
    int n = arr.size();
    
    reverseAnArray(arr , n);

    vector<int> answer(n , -1);
    stack<int> st;
    st.push(0);

    for(int i = 1; i < n; i++) {
        while(!st.empty() && arr[i] < arr[st.top()]){
            answer[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    reverseAnArray(answer , n);
    return answer;

}
int main() {
    vector<int> arr = {4 , 3 , 9 , 1 , 0 , 6 , 8 , 3 , 2};
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
cout<<endl;
    vector<int> vec = prevSmallerElement(arr);
    for(int i = 0; i < vec.size(); i++) {
        cout<<vec[i]<<"\t";
    }
    return 0;
}