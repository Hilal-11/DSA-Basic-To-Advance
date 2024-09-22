#include<stdio.h>
#include<conio.h>

int main() {

    int arr[20];
    int n;
    printf("Enter value of n :- ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d" , &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d \t" , arr[i]);
    }


    printf("\n\n");

    // insert at position / index

    int newElement;
    int index;

    printf("Enter new element :- ");
    scanf("%d \n" , &newElement);

    printf("Enter index :- ");
    scanf("%d \n" , &index);




    for(int i = n-1; i >=index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = newElement;
    n++;


    for(int i = 0; i < n; i++) {
        printf("%d \t" , arr[i]);
    }


    return 0;
}