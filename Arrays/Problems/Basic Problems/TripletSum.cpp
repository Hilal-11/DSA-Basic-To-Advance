#include<iostream>
using namespace std;

int TripletSun(int data[] , int target , int size ) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            for(int k = j+1; k < size; k++) {
                if(data[i] + data[j] + data[k] == target) {
                    count++;
                }
            }
        }
    }

    return count;
}
int main() {
    int data[6] = {2,  4 , 6  , 7 , 3 , 3};
    int target = 16;
    int size = 6;
    cout<<TripletSun(data , target , size)<<endl;
     return 0;
}