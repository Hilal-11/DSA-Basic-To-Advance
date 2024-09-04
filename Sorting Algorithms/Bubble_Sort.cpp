#include<iostream>
using namespace std;

void bubbleSort(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if (data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;   
            }
            
        }
    }
}


// Optimize the bubble sort
void bubbleSortOptimize(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int flag = false;
        for(int j = 0; j < n-1-i; j++) {
            if(data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;   
                flag = true;
            }
        }
        if (flag == false){
            break;
        }
    }
}
int main() {

    int data[6] = {6 , 5 , 4 , 3 , 2 , 1};
    int n = 6;
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    } 

cout<<endl;
    bubbleSort(data , n);

    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    } 

cout<<endl;

    bubbleSortOptimize(data , n);
    
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    } 

    return 0;
}