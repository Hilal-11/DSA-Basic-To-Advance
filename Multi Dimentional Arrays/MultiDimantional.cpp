#include<iostream>
using namespace std;

int main() {

    int data[3][3] = {2 , 3 , 5 , 6 , 7 , 8 , 9 , 6 , -1};
    cout<<data[0][0]<<endl;
    cout<<data[0][1]<<endl;
    cout<<data[0][2]<<endl;
    cout<<data[1][0]<<endl;
    cout<<data[1][1]<<endl;
    cout<<data[1][2]<<endl;
    cout<<data[2][0]<<endl;
    cout<<data[2][1]<<endl;
    cout<<data[2][2]<<endl;
    

    int data2[3][3]={ {10  , 20 , 30},
                      {40 , 50 , 60},
                      {70 , 80 , 90}};
    cout<<data2[0][0]<<endl;
    cout<<data2[0][1]<<endl;
    cout<<data2[0][2]<<endl;
    cout<<data2[1][0]<<endl;
    cout<<data2[1][1]<<endl;
    cout<<data2[1][2]<<endl;
    cout<<data2[2][0]<<endl;
    cout<<data2[2][1]<<endl;
    cout<<data2[2][2]<<endl;



    //  input and output array iteration
    //  input and output array iteration


    int array[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }


cout<<endl<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            cout<<array[j][i]<<"\t";
        }
        cout<<endl;
    }



    return 0;
}