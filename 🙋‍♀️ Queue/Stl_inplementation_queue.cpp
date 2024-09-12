#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    for(int i = 0; i < 5; i++) {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}