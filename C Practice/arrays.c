#include<stdio.h>
#include<conio.h>

int main() {

    // int data[5];
    // printf("%d \n" , data[0]);    
    // printf("%d \n" , data[1]);    
    // printf("%d \n" , data[2]);    
    // printf("%d \n" , data[3]);    
    // printf("%d \n" , data[4]);    

    // int data[10];
    // printf("%d \n" , sizeof(data));
    // printf("%d \n" , sizeof(data[0]));    


    // int data[] = {1,2,3,4,5};
    // printf("%d \n" , sizeof(data));
    

    // int data[10] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};
    // printf("%d \t" , data[0]);
    // printf("%d \t" , data[1]);
    // printf("%d \t" , data[2]);
    // printf("%d \t" , data[3]);
    // printf("%d \t" , data[4]);
    // printf("%d \t" , data[5]);
    // printf("%d \t" , data[6]);
    // printf("%d \t" , data[7]);
    // printf("%d \t" , data[8]);
    // printf("%d \t" , data[9]);

    // printf("%d \t" , data[10]); // garbage collection values
    // printf("%d \t" , data[11]); // garbage collection values
    // printf("%d \t" , data[12]); // garbage collection values



    int data[10] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};

    printf("%d \t" , data[0]);
    printf("%d \t" , data[1]);
    printf("%d \t" , data[2]);
    printf("%d \t" , data[3]);
    printf("%d \t" , data[4]);
    printf("%d \t" , data[5]);
    printf("%d \t" , data[6]);
    printf("%d \t" , data[7]);
    printf("%d \t" , data[8]);
    printf("%d \t" , data[9]);


    // Re-initilization of array
    // Re-initilization of array

    data[0] = 99;
    data[1] = 75;
    data[2] = 73;
    data[3] = 10;
    data[4] = 62;
    data[5] = 33;
    data[6] = 22;
    data[7] = 77;
    data[8] = 91;
    data[9] = 51;


    printf("\n\n");

    printf("%d \t" , data[0]);
    printf("%d \t" , data[1]);
    printf("%d \t" , data[2]);
    printf("%d \t" , data[3]);
    printf("%d \t" , data[4]);
    printf("%d \t" , data[5]);
    printf("%d \t" , data[6]);
    printf("%d \t" , data[7]);
    printf("%d \t" , data[8]);
    printf("%d \t" , data[9]);





    return 0;
}