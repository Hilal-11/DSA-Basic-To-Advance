#include<iostream>
using namespace std;

int lengthOfArray(char ch[]) {

    int length = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        length++;
    }

    return length;
}
int main() {

    char ch[] = {'H', 'I' , 'L' , 'A' , 'L', '\0'};
    cout<<lengthOfArray(ch);

    return 0;
}