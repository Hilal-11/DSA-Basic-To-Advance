#include<iostream>
using namespace std;


void RowSum(int data[3][3] , int rows , int cols) {

    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum  = sum + data[i][j];
        }

        cout<<sum<<endl;
    }
}

int main() {

    int data[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            cin>>data[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            cout<<data[i][j]<<"\t";
        }
        cout<<endl;
    }

    RowSum(data , 3 , 3);


    return 0;
}