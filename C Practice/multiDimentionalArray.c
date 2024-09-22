#include<stdio.h>
#include<conio.h>

int main() {

    printf("Multi-Dimentional Array in c \n\n");

    // int data[][];
    // int data[4][4];
    // printf("%d \t" , data[0][0]);
    // printf("%d \t" , data[0][1]);
    // printf("%d \t" , data[0][2]);
    // printf("%d \t" , data[1][0]);
    // printf("%d \t" , data[1][1]);
    // printf("%d \t" , data[1][2]);


    // int data[3][3];
    // data[0][0] = 88;
    // data[0][1] = 33;
    // data[0][2] = 77;

    // data[1][0] = 92;
    // data[1][1] = 61;
    // data[1][2] = 81;

    // data[2][0] = 64;
    // data[2][1] = 56;
    // data[2][2] = 98;

    // printf("%d \t" , data[0][0]);
    // printf("%d \t" , data[0][1]);
    // printf("%d \t \n" , data[0][2]);

    // printf("%d \t" , data[1][0]);
    // printf("%d \t" , data[1][1]);
    // printf("%d \t \n" , data[1][2]);

    // printf("%d \t" , data[2][0]);
    // printf("%d \t" , data[2][1]);
    // printf("%d \t" , data[2][2]);

    // printf("\n\n");

    // printf("%d" , sizeof(data));




    // int data[3][3];
    // data[0][0] = 88;
    // data[0][1] = 33;
    // data[0][2] = 77;

    // data[1][0] = 92;
    // data[1][1] = 61;
    // data[1][2] = 81;

    // data[2][0] = 64;
    // data[2][1] = 56;
    // data[2][2] = 98;


    // printf("%d \t" , data[0]);
    // printf("%d \t" , data[0]);
    // printf("%d \t \n" , data[0]);

    // printf("%d \t" , data[1]);
    // printf("%d \t" , data[1]);
    // printf("%d \t \n" , data[1]);

    // printf("%d \t" , data[2]);
    // printf("%d \t" , data[2]);
    // printf("%d \t \n \n" , data[2]);


    // printf("%d \t" , data[0]);
    // printf("%d \t" , data[1]);
    // printf("%d \t \n" , data[2]);

    // printf("%d \t" , data[0]);
    // printf("%d \t" , data[1]);
    // printf("%d \t \n" , data[2]);

    // printf("%d \t" , data[0]);
    // printf("%d \t" , data[1]);
    // printf("%d \t \n" , data[2]);

                           
    // int data[3][3] = {  {10 , 20 , 30},
    //                     {40 , 50 , 60} ,
    //                     {70 , 80 , 90}
    //                 };

    // printf("%d \t" , data[0][0]);
    // printf("%d \t" , data[0][1]);
    // printf("%d \t" , data[0][2]);

    // printf("%d \t" , data[1][0]);
    // printf("%d \t" , data[1][1]);
    // printf("%d \t" , data[1][2]);

    // printf("%d \t" , data[2][0]);
    // printf("%d \t" , data[2][1]);
    // printf("%d \t" , data[2][2]);





    int data[3][3][3] = { 
                    {{11 , 61 , 87} , {23 , 87 , 90} , {12 , 81 , 75}} ,
                    {{55 , 54 , 48} , {32 , 54 , 28} , {28 , 54 , 18}} ,
                    {{90 , 99 , 64} , {90 , 26 , 84} , {70 , 16 , 14}} 
        };
    
    printf("{ [ %d \t" , data[0][0][0]);
    printf("%d \t" , data[0][0][1]);
    printf("%d ]\t" , data[0][0][2]);

    printf("[ %d \t" , data[0][1][0]);
    printf("%d \t" , data[0][1][1]);
    printf("%d ] \t" , data[0][1][2]);

    printf("[ %d \t" , data[0][2][0]);
    printf("%d \t" , data[0][2][1]);
    printf("%d ] \t \n \n" , data[0][2][2]);


    printf("[ %d \t" , data[1][0][0]);
    printf("%d \t" , data[1][0][1]);
    printf("%d ] \t" , data[1][0][2]);

    printf("[ %d \t" , data[1][1][0]);
    printf("%d \t" , data[1][1][1]);
    printf("%d ] \t" , data[1][1][2]);

    printf("[ %d \t" , data[1][2][0]);
    printf("%d \t" , data[1][2][1]);
    printf("%d ] \t \n \n" , data[1][2][2]);



    printf("[ %d \t" , data[2][0][0]);
    printf("%d \t" , data[2][0][1]);
    printf("%d \t" , data[2][0][2]);

    printf("[ %d \t" , data[2][1][0]);
    printf("%d \t" , data[2][1][1]);
    printf("%d ] \t" , data[2][1][2]);

    printf("[ %d \t" , data[2][2][0]);
    printf("%d \t" , data[2][2][1]);
    printf("%d ] } \t" , data[2][2][2]);



    printf("\n\n\n");



    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                printf(" %d  \t" , data[i][j][k]);
            }
        }
        printf("\n\n");

    }



    return 0;
}