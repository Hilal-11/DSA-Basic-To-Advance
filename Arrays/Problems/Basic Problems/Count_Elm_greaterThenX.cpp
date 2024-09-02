#include<iostream>
using namespace std;


int countElementsGreaterthanX(int data[] , int x , int size) {
    int count = 0;

    for(int i = 0; i < size; i++){
        if(data[i] > x) {
            count++;
        }
    }
    return count;
}
int main () {

    int data[10] = {1 , 9 , 30 , 4 , 11 , 18 , 16 , 10 , 221 , 15};
    int x = 5;
    int size = 10;

    cout<<countElementsGreaterthanX(data , x , size);
    return 0;
}