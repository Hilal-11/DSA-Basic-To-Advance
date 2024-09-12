#include<iostream>
#include<limits>
using namespace std;


int FindElement(int data[] , int n , int target) {
    if(n == 0) {
        return -1;
    }

    for(int i = 0; i < n; i++) {
        int element = data[i];
        if(element == target) {
            return element;
        }
    }

    return -1;
}

// find element if exists return true otherwise return false
// find element if exists return true otherwise return false


bool linearSearch(int data[] , int n , int target) {
    if(n == 0) {
        return false;
    }
    for(int i = 0; i < n; i++) {
        if(data[i] == target) {
            return true;
        }
    }

    return false;
}


int main() {
    
    int data[10] = {10 , 7 ,  8, 19 , 14 , 16 , 17 , 11 , 101 , 55};
    int n = 10;
    int target = 14;
    int ans = FindElement(data , n , target);
    cout<<ans<<endl;

    // if(linearSearch(data , n , target)) 
    //     cout<<"True"<<endl;
    // else
    //     cout<<"False"<<endl;


    // using tarnary operator
    // using tarnary operator

    linearSearch(data , n , target) ? cout<<"True" : cout<<"False";



    return 0;
}