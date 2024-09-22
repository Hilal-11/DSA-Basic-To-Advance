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


    // insert at first

    printf("\n\n");

    int newElement;
    printf("Enter new Element :- ");
    scanf("%d", &newElement);

    for(int i = n-1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }

    arr[0] = newElement;
    n++;


    for(int i = 0; i < n; i++) {
        printf("%d \t" , arr[i]);
    }


    return 0;
}