#include<iostream>
#include<limits.h>
using namespace std;

int FindMin(int data[] , int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(data[i] < min) {
            min = data[i];
        }
    }

    return min;
}
int main() {
      
    int data[10] = {10 , 7 ,  8, 19 , 14 , 16 , 17 , 11 , 101 , 55};
    int n = 10;

    int ans = FindMin(data , n);
    cout<<"Minimum Element = "<<ans<<endl;


}