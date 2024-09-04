#include<iostream>
#include<limits.h>
using namespace std;


//  Bubble Sort implamentation
void BubbleSortImplementation(int data[] , int  n) {
    for(int i = 0; i < n-1; i++) {
        bool flag = false;
        for(int j = 0; j < n-1-i; j++) {
            if(data[j] > data[j+1]) {

                int temp = data[j];
                data[j] = data[j+1];            // Swaping of valuesbased on sorting condition
                data[j+1] = temp;
                flag = true;
            }
        }

        if(flag == false) {
            return;
        }
    }
}


//  Selection Sort implamentation
void SelectionSortImplementation(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i; j < n; j++){
            if(min > data[j]) {

                min = data[j];
                minIdx = j;
            }
        }

        int temp = data[minIdx];
        data[minIdx] = data[i];                 // Swaping of values based on sorting condition           
        data[i] = temp;

    }
}
//  Insertion Sort implamentation
void InsertionSortImplementation1(int data[] , int n) {
    for(int i = 1; i < n; i++) {
        int j = i; 
        while(j > 0 && data[j] < data[j-1]) {

            int temp = data[j];
            data[j] = data[j-1];                // Swaping of values based on sorting condition 
            data[j-1] = temp;
            j--;
        }
    }
}

void InsertionSortImplementation2(int data[] , int n) {
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(data[j] < data[j-1]) {

                int temp = data[j];
                data[j] = data[j-1];            // Swaping of values based on sorting condition 
                data[j-1] = temp;
            }
        }
    }
}



    //  Implementation of all sorting algorithms in decending order
    //  Implementation of all sorting algorithms in decending order


//  Decending order Bubble Sort implamentation
void DecendingOrderBubbleSortImplamentation(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int flag = false;
        for(int j = 0; j < n-1-i; j++) {
            if(data[j] < data[j+1]) {

                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}
//  Decending order Selection Sort implamentation
void DecendingOrderSelectionSortImplamentation(int data[] , int n) {
    for(int i = 0; i < n-1; i++) {
        int max = INT_MIN;
        int minIdx = -1;
        for(int j = i; j < n; j++) {
            if(max < data[j]) {
                max = data[j];
                minIdx = j;
            }
        } 

        int temp = data[minIdx];
        data[minIdx] = data[i];
        data[i] = temp;  
    }
}
//  Decending order Insertion Sort implamentation
void DecendingOrderInsertionSortImplamentation(int data[] , int n) {
    for(int i = 1; i < n; i++) {
        int j = i;
        while(j > 0 && data[j] > data[j+1]) {
            int temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
            j--;
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
    cout<<"Bubble Sort Algorithm"<<endl;
    BubbleSortImplementation(data , n);
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    }
    cout<<endl;
    cout<<"Selection Sort Algorithm"<<endl;
    SelectionSortImplementation(data , n);
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    }
    cout<<endl;
    cout<<"Insertion Sort Algorithm"<<endl;
    InsertionSortImplementation1(data , n);
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    }
    cout<<endl;
    cout<<"Insertion Sort Algorithm"<<endl;
    InsertionSortImplementation2(data , n);
    for(int i = 0; i < n; i++) {
        cout<<data[i]<<"\t";
    }
    cout<<endl;



    //  Implementation of all sorting algorithms in decending order
    //  Implementation of all sorting algorithms in decending order


    cout<<endl<<endl;
    cout<<"Implementation of all sorting algorithms in decending order"<<endl;
    int data2[8] = {6 , 3 ,5 , 4 , 8 , 2 , 1 , 7};
    int len = 8;
    DecendingOrderBubbleSortImplamentation(data2 , len);
    for(int i = 0; i < len; i++) {
        cout<<data2[i]<<"\t";   
    }
    cout<<endl;
    DecendingOrderSelectionSortImplamentation(data2 , len);
    for(int i = 0; i < len; i++) {
        cout<<data2[i]<<"\t";   
    }
        cout<<endl;
    DecendingOrderInsertionSortImplamentation(data2 , len);
    for(int i = 0; i < len; i++) {
        cout<<data2[i]<<"\t";   
    }



    cout<<endl;


    return 0;
}