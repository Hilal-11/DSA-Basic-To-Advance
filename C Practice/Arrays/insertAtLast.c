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
    // insert at last

    int newElement;
    printf("Enter new element :- ");
    scanf("%d" , &newElement);

    arr[n] = newElement;
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d \t" , arr[i]);
    }


    return 0;
}