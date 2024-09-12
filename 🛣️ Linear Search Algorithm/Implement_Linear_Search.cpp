#include<iostream>
using namespace std;

int linearSearch(int data[] , int n , int target) {
    if(n == 0) {
        return -1;
    }
    for(int i = 0; i < n; i++) {
        int element  = data[i];
        if(element == target) {
            return i;
        }   
    }

    return -1;
}


int main() {

    int data[10] = {10 , 7 ,  8, 19 , 14 , 16 , 17 , 11 , 101 , 55};
    int n = 10;
    int target = 14;

    int ans = linearSearch(data , n , target);
    cout<<ans<<endl;

    return 0;
}