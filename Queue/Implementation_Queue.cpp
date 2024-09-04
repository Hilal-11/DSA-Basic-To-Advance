#include<iostream>
using namespace std;

class queue {
    public:
        int front;
        int rare;
        int size;
        int *array;

    // constructor
    queue(int size){
        this->size = size;
        front = 0;
        rare = 0;
        array = new int[size];

    }

    // push function
    void push(int element) {
        if(rare == size) {
            cout<<"Queue is full"<<endl;

        }
        else{
            array[rare] = element;
            rare++;
        }
    }
    // pop function
    int pop() {
        if(front == rare) {
            return -1;
        }
        else{
            int ans = array[front];
            array[front] = -1;
            front++;
            if(front == rare) {
                front = 0;
                rare = 0;
            }
        return ans;

        }
    }


    int Front() {
        if(front == rare) {
            return -1;
        }else{
            return array[front];
        }
    }

    bool isEmpty() {
        if(front == rare) {
            return true;
        }else{
            return false;
        }
    }

};
int main() {

    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    
    for(int i = 0; i < 5; i++) {
        cout<<q.Front()<<endl;
        q.pop();
    }

    cout<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<endl<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.Front()<<endl;


    return 0;
}