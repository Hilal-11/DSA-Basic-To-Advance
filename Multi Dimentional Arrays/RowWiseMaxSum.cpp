#include<iostream>
using namespace std;


void MaxRowSum(int data[3][3] , int rows , int cols) {

    int max = -647474849;
    int index = -1;
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum  = sum + data[i][j];
        }
         if (sum > max){
            max = sum;
            index = rows;
        }

    }

    cout<<"Maximum Row = "<<max<<endl;
    cout<<"Maximum Row = "<<index<<endl;




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

    MaxRowSum(data , 3 , 3);


    return 0;
}