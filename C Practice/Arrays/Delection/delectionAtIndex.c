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


    int index;
    printf("Enter index you want to delete on array :- ");
    scanf("%d" , &index);

    for(int i = index; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    n--;

    for(int i = 0; i < n; i++) {
        printf("%d \t" , arr[i]);
    }

    
    


    return 0;

}