#include<iostream>
#include<limits.h>
using namespace std;

// Linear Seacrh in range
// Linear Seacrh in range


// find element in range usinglinear search
int linearSearch_In_Range(int data[] , int start , int end , int target) {
    if(start == 0 && end == 0) {
        return -1;
    }
    for(int i = start; i <= end; i++) {
        if(data[i] == target) {
            return i;
        }
    }
    return -1;
}

// find element in range usinglinear search
int linearSearch_In_Range2(int data[] , int start , int end , int target) {
    if(start == 0 && end == 0) {
        return -1;
    }
    for(int i = start; i <= end; i++) {
        if(data[i] == target) {
            return data[i];
        }
    }
    return -1;
}



// find Maximum element in range using linear search
int FindMax(int data[] , int start , int end) {
    int max = INT_MIN;
    for(int i = start; i <= end; i++) {
        if(data[i] > max) {
            max = data[i];
        }
    }

    return max;
}
// find Minimum element in range using linear search

int FindMin(int data[] , int start , int end) {
    int min = INT_MAX;
    for(int i = start; i <= end; i++) {
        if(data[i] < min) {
            min = data[i];
        }
    }

    return min;
}






int main() {

    int data[10] = {10 , 7 ,  8, 19 , 14 , 16 , 17 , 11 , 101 , 55};
    int start = 2;
    int end = 7;
    int target = 16;
    cout<<linearSearch_In_Range(data , start , end , target)<<endl;
    cout<<linearSearch_In_Range2(data , start , end , target)<<endl;

    cout<<endl; 
    cout<<"Maximum element = "<<FindMax(data , start , end)<<endl;
    cout<<"Minimum element = "<<FindMin(data , start , end)<<endl;



    return 0;
}