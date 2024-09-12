#include<iostream>
using namespace std;

void SwapeAlternate(int data[] , int size) {

    for(int i = 0; i < size-1; i = i=i+2) {
            int temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp;
    }
}

int main() {

    int data[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int size = 7;

    for(int i = 0; i < size; i++){
        cout<<data[i]<<"\t";
    }
cout<<endl;
    SwapeAlternate(data , size);
    for(int i = 0; i < size; i++){
        cout<<data[i]<<"\t";
    }

    
    return 0;
}