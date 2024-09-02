#include<iostream>
using namespace std;    

void ReverseArray (int data[] , int size) {
    int i = 0;
    int j = size-1;

    while(i < j) {
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
        i++;
        j--;
    }
}

// int kStepsRotateArray(int data[] , int k , int size){

//     int p1_s = size-k;
//     int p2_s = k;

//     int p1_array[p1_s];
//     int p2_array[p2_s];


//     // int finalArray[size];


//     for(int i = 0; i < p1_s; i++) {
//         p1_array[i] = data[i];
//     }
//     int idx = 0;
//     for(int i = p1_s; i < size; i++) {
//         p2_array[idx] = data[i];
//         idx++;
//     }



//     ReverseArray(p1_array , p1_s);
//     ReverseArray(p2_array , k);


//     int finalArray[size];
//     for(int i = 0; i < p1_s; i++) {
//         finalArray[i] = p1_array[i];
//     }  

//     int idxx = 0;  

//     for(int i = 2; i < size; i++) {
//         finalArray[i] = p2_array[idxx];
//         idxx++;
//     } 




//     ReverseArray(finalArray , size);

//     for(int i = 0; i < size; i++) {
//         cout<<finalArray[i]<<"\t";
//     }
// }




    // k-steps rotate an array 
    // k-steps rotate an array 



int kStepsRotateArray(int data[] , int k , int size){
    
}


int main() {

    int data[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int k = 6;
    int size = 7;

    kStepsRotateArray(data , k , size);

    return 0;
}