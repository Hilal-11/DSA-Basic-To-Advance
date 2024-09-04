#include<iostream>
using namespace std;


// implementation of insertion sort
// implementation of insertion sort

void insertionSort(int data[] , int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        while(j > 0 && data[j] < data[j-1]) {
            int temp = data[j];
            data[j] = data[j-1];
            data[j-1] = temp; 
            j--;
        }
    }
}


// implementation of insertion sort using for loop
// implementation of insertion sort using for loop
void insertionSort2(int data[] , int n) {
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(data[j] < data[j-1]) {
                int temp = data[j];
                data[j] = data[j-1];
                data[j-1] = temp;
            }
        }
    }
}


int main() {
    int arr[7] = {7 , 6 , 5 , 4 , 3, 2 ,1};
    int n = 7;
    cout<<"Unsorted Array"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
cout<<endl;
    insertionSort(arr , n);

    cout<<"Sorted Array"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
cout<<endl;
cout<<endl;

    insertionSort2(arr , n);
    cout<<"Sorted Array"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }

    return 0;
}