#include<iostream>
#include<vector>
#include<array>
using namespace std;

int LinearSerachOnMultiDimentionalArrays(int data[][4] , int n , int m , int target) {
    if(n == 0 && m == 0) {
        return -1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(data[i][j] == target) {
                return data[i][j];
            }
        }   
    } 

    return -1;  
}


// int LinearSerach(int data[][4] , int n , int m , int target) {

    // int arr[2] = {-1 , -1};
    // if(n == 0 && m == 0) {
    //     return  arr[2];
    // }

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         if(data[i][j] == target) {
    //                     arr[0] = {i};
    //                     arr[1] = {i};
    //                 return arr[2];
    //         }
    //     }   
    // }   
    // return  arr[2];



// }

vector<int> linear(int data[4][4] , int n , int m , int target){

    vector<int> ans(2 , -1);
    if(n == 0 && m == 0) {
        return  ans;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(data[i][j] == target) {

                cout<<"["<<i<<" , "<<j<<"]"<<endl;
                break;
            }
        }   
    }   
    // return  ans;
}

int main() {

    int data[4][4] = {  {10 , 99 , 66 , 74} ,
                        {88 , 55 , 32 , 11} , 
                        {81 , 74 , 51 , 89} , 
                        {21 , 32 , 71 , 88}};
    for(int i = 0; i < 4; i ++) {
        for(int j = 0; j < 4; j++) {
            cout<<data[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    int target = 88;

    // int ans = LinearSerachOnMultiDimentionalArrays(data , 4 , 4 , target);
    // cout<<"Element = "<<ans<<endl;

    cout<<endl;

    // cout<<LinearSerach(data , 4 , 4 , target)<<endl;
    // std::vector<int> result = linear(data , 4 , 4 , target);

    linear(data , 4 , 4 , target);




    return 0;
}