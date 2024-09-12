#include<iostream>
using namespace std;


int FindMaximumElement(int data[]) {
    int maximumElement = data[0];
    for(int i = 0; i < 10; i++) {
        if (data[i] > maximumElement){
            maximumElement = data[i];
        } 
    }

    return maximumElement;
}
int FindMinimumElement(int data[]) {
    int minimumElement = data[0];
    for(int i = 0; i < 10; i++) {
        if (data[i] < minimumElement){
            minimumElement = data[i];
        }
        
    }

    return minimumElement;
}
int main() {

    int data[] = {10 , 6 , 9 , 10 , 20 , 5 , 11 , 13 , 12 , 19 };
    cout<<FindMaximumElement(data)<<endl;
    cout<<FindMinimumElement(data)<<endl;


    return 0;
}