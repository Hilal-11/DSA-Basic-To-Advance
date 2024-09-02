#include<iostream>
using namespace std;

bool LinearSearchOnMatrix(int data[3][3] , int targer, int rows , int cols) {

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++){
            if(data[i][j] == targer){
                return true;
            }
        }
    } 

    return false;
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

    int target;
    cout<<"Enter Target Element :- "<<endl;
    cin>>target;
    if(LinearSearchOnMatrix(data , target , 3 , 3)) {
        cout<<target<<" is present in array"<<endl;
    }else{
        cout<<target<<" is not present in array"<<endl;

    }


    return 0;
}