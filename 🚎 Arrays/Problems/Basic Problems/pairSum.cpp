#include<iostream>
using namespace std;

int PairSum(int data[] , int target , int size) {

    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(data[i] + data[j] == target) {
                count++;
            }
        }
    }

    return count;
}
int main() {

    int data[5] = {1 , 2 , 1 , 2 , 3 };
    int target  = 4;
    int size = 5;
    cout<<"Hello fucking World ..."<<endl;
    cout<<"total pairs = "<<PairSum(data , target , size)<<endl;

    return 0;
}