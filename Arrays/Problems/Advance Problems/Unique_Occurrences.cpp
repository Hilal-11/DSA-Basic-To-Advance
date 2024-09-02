#include<iostream>
using namespace std;


bool uniqueOccurrences(int data[] , int size) {

    int occurrencesArray[size];
    int count = 0;
    int idx = 0;
    for(int i = 0; i < size; i++) {
            count = 0;
        for(int j = i+1; j < size; j++) {
            if(data[i] == data[j]){
                count++;
            }
        

        }
            occurrencesArray[idx] = count;
            idx++;
    }

    cout<<occurrencesArray[0]<<endl;
    cout<<occurrencesArray[1]<<endl;
    cout<<occurrencesArray[2]<<endl;


}
int main() {
    int data[6] = {1 , 2 , 2 , 1 , 3, 1};
    int size = 6;
    cout<<uniqueOccurrences(data , size);
    return 0;
}