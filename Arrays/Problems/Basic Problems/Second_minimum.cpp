#include<iostream>
using namespace std;

int SecondMinimumElement(int data[] , int size) {

    int minimumElement = data[0];

    for(int i = 0; i < size; i++) {
        if(data[i] < minimumElement) {
            minimumElement = data[i];
        }
    }

    int secondMinimum = data[0];

    for(int i = 0; i < size; i++) {
        if(data[i] < secondMinimum && data[i] > minimumElement) {
            secondMinimum = data[i];
        }
    }

    return secondMinimum;
}
int main() {
    int data[10] = {10 , -9 , 30 , 4 , 11 , 18 , 16 , 10 , 221 , 15};
    int size = 10;
    cout<<SecondMinimumElement(data , size)<<endl;
    return 0;
}