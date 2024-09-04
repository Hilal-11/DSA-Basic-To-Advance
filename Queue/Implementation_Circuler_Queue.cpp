#include<iostream>
using namespace std;

class circularQueue{
    public :
        int front;
        int rare;
        int *array;
        int size;


    circularQueue(int size) {
        this->size = size;
        array = new int[size];
        front = -1;
        rare = -1;
    }

    void push(int element) {

    }

};
int main() {



    return 0;
}