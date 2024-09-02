#include<iostream>
using namespace std;


void inputMatrix(int data[3][3] , int rows , int cols) {

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            cin>>data[i][j];
        }
    }
}
void diaplayMatrix(int data[3][3] , int rows , int cols){
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            cout<<data[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void MatrixMultiplication(int MatrixA[3][3] , int MatrixB[3][3] , int rows , int cols) {


    int MatrixMultiplication[3][3];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            int values = 0;
            for(int k = 0; k < cols; k++) {
                values += MatrixA[i][k] * MatrixB[k][j];
            }
            MatrixMultiplication[i][j] = values;
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) {
            cout<<MatrixMultiplication[i][j]<<"\t";
        }
        cout<<endl;
    }
  
}

int main() {

    cout<<"Enter Matrix A Elements :- "<<endl;
    int MatrixA[3][3];
    inputMatrix(MatrixA , 3 , 3);
    cout<<"Enter Matrix A Elements :- "<<endl;
    int MatrixB[3][3];
    inputMatrix(MatrixB , 3 , 3);

    cout<<"Matrix A :- "<<endl;
    diaplayMatrix(MatrixA , 3 , 3);
    cout<<endl;
    cout<<"Matrix B :- "<<endl;
    diaplayMatrix(MatrixB , 3 , 3);
    

cout<<endl<<endl;
    MatrixMultiplication(MatrixA , MatrixB , 3 , 3);

    return 0;
}