#include<iostream>
using namespace std;

int SecondLargestElement(int data[] , int size) {
    int largestElement = data[0];

    for(int i = 0; i < size; i++) {
        if(data[i] > largestElement) {
            largestElement = data[i];
        }
    }

    int secondLargest = data[0];

    for(int i = 0; i < size; i++) {
        if(data[i] > secondLargest && data[i] < largestElement) {
            secondLargest = data[i];
        }   
    }

    return secondLargest;
    
}
int main() {

    int data[10] = {1 , 9 , 30 , 4 , 11 , 18 , 16 , 10 , 221 , 15};
    int size = 10;
    cout<<SecondLargestElement(data , size)<<endl;



    return 0;
}