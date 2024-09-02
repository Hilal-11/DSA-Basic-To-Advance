#include<iostream>
using namespace std;

class Node {
    public : 
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
        }
};

int main() {

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    Node f(60);


    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;

    cout<<b.data<<"\t";
    cout<<a.data<<"\t";
    cout<<c.data<<"\t";
    cout<<d.data<<"\t";
    cout<<e.data<<"\t";
    cout<<f.data<<"\t"<<endl;

    cout<<b.next<<"\t";
    cout<<a.next<<"\t";
    cout<<c.next<<"\t";
    cout<<d.next<<"\t";
    cout<<e.next<<"\t";
    cout<<f.next<<"\t";

    
cout<<endl<<endl;


    // access only first Node
    // access only first Node

    cout<<a.data<<"\t";
    cout<<a.next->data<<"\t";
    cout<<a.next->next->data<<"\t";
    cout<<a.next->next->next->data<<"\t";
    cout<<a.next->next->next->next->data<<"\t";
    cout<<a.next->next->next->next->next->data<<"\t";


    return 0;
}