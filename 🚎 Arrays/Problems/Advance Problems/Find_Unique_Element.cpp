#include<iostream>
using namespace std;

int findUniqueElementA(int data[] , int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(data[i] == data[j]) {
                data[i] = -1;
                data[j] = -1;
            }
        }
    }
    int answer = 0;
    for(int i = 0; i < size; i++){
        if(data[i] > 0){

            answer = data[i];
        }

    }
    return answer;
}



// Secound approach of this problem
// Secound approach of this problem


int findUniqueElementB(int data[] , int size) {
    
    int answer = -1;
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(data[i] == data[j]){
                data[i] ^ data[j];          // XOR ---> 10 ^ 10 = 0  -----> x ^ x = 0
            }
        }   
    }

    for(int i = 0; i < size; i++) {
        if(data[i] > 0){
            answer = data[i];
        }
    }   

    return answer;
}




// Secound approach of this problem
// Secound approach of this problem        Most Appoprate Approach { Best Approach of this problem}
// Secound approach of this problem        Most Appoprate Approach { Best Approach of this problem}
// Secound approach of this problem

int findUniqueElementC(int data[] , int size) {
    
    int answer = 0;
    for(int i = 0; i < size; i++) {
           answer = answer ^ data[i];
    }
    return answer;
}


int main() {
    int data[9] = {1 , 6 , 2 , 3 , 2 , 1 , 3 ,11 , 6};
    int size = 9;
    cout<<endl;
    cout<<findUniqueElementA(data , size)<<endl;
    cout<<findUniqueElementB(data , size)<<endl;
    cout<<findUniqueElementC(data , size)<<endl;






    return 0;
}