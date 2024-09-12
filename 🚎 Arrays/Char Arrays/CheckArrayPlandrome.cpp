#include<iostream>
using namespace std;

bool CheckPlandrome(char arr[] , int n){

    bool ans = false;
    string s = arr;
    int i = 0;
    int j = n-1;

    while(i < j) {

        char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        i++;
        j--;
    }

    if (s == arr){
        ans = true;
    }

    return ans;
    
}



// Secound Approach of Plandrome string
// Secound Approach of Plandrome string


bool CheckPlandromeB(char arr[] , int n){

    int i = 0;
    int j = n-1;
    bool ans = false;
    while(i < j) {

        if(arr[i] == arr[j]){
            ans = true;
            i++;
            j--;
        }
    }
    return ans;
}

int main() {

    char ch[] = {'M', 'A' , 'G' , 'A' , 'M' , '\0'};
    cout<<ch<<endl;
    if (CheckPlandromeB(ch , 5))
    {
       cout<<"true";
    }else{
        cout<<"false";
    }
    


    return 0;
}