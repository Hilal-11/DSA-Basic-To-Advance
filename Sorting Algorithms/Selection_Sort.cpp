#include<iostream>
#include<limits.h>
using namespace std;

// Selection sort algorithm implementation
// Selection sort algorithm implementation


void selectionSort1(int arr[] , int n) {

    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i; j <= n; j++) {
            if(min > arr[j]) {
                min = arr[j];
                minIdx = j;
            }
        }
    //  swaping the minimum value with first element of unsorted array
    //  swaping the minimum value with first element of unsorted array

        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// Selection sort algorithm implementation
// Selection sort algorithm implementation


void selectionSort2(int arr[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

    //  swaping the minimum value with first element of unsorted array
    //  swaping the minimum value with first element of unsorted array

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}



// practice of selection sort

void ImplementSelectionSort(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int minIndex = -1;
        for(int j = i; j < n; j++) {
            if(min > data[j]) {
                min = data[j];
                minIndex = j;
            }
        }

        // swaping of values
        int temp = data[minIndex];
        data[minIndex] = data[i];
        data[i] = temp;
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
    selectionSort1(arr , n);

    cout<<"Sorted Array 1 "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }

cout<<endl;

    ImplementSelectionSort(arr , n);
    cout<<"Sorted Array 2 "<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }

    return 0;
}