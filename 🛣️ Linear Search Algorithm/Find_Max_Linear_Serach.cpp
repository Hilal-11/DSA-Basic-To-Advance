#include<iostream>
#include<limits.h>  
using namespace std;

int FindMaximum(int data[] , int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(data[i] > max) {
            max = data[i];
        }
    }

    return max;
}
int main() {
      
    int data[10] = {10 , 7 ,  8, 19 , 14 , 16 , 17 , 11 , 101 , 55};
    int n = 10;
    int ans = FindMaximum(data ,n);
    cout<<"Maximum element = "<<ans;

}