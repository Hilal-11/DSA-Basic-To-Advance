#include<iostream>
using namespace std;


void ColumnWiseSum(int data[3][3] , int rows , int cols) {

    for(int i = 0; i < cols; i++) {
        int sum = 0;
        for(int j = 0; j < rows; j++) {
            sum += data[j][i];
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

    ColumnWiseSum(data , 3 , 3);
    return 0;
}