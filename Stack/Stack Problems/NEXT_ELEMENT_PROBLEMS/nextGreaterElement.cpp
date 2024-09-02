#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr) {
    int n = arr.size();
    vector<int> answer(n , -1);

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[j] > arr[i]){
                answer[i] = (arr[j]);
                break;
            }
        }   
    }
    return answer;
}

int main() {    
    vector<int> arr = {4 , 3 , 9 , 1 , 0 , 6 , 8 , 3 , 2};
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    vector<int> newArray = nextGreaterElement(arr);

    for(int i = 0; i < newArray.size(); i++) {
        cout<<newArray[i]<<"\t";
    }



    return 0;
}