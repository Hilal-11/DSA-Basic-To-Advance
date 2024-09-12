#include<iostream>
using namespace std;

void ReverseArray(char arr[] , int n){

    int i = 0;
    int j = n-1;

    while(i < j) {

        char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        i++;
        j--;
    }
}

int main() {

    char ch[] = {'H', 'I' , 'L' , 'A' , 'L' , '\0'};
    cout<<ch<<endl;
    ReverseArray(ch , 5);
    cout<<ch<<endl;

    return 0;
}