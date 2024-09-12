#include<iostream>
#include<queue>
using namespace std;

class Node {
   public: 
        int data;
        Node* left;
        Node* right;

// constructor
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {

    cout<<"Enter the data for Node :- ";
    int data;
    cin>>data; 

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for left of  "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for right of "<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;

}

// Breadth-First-Search on Binary Trees
// Level-Order-Traversal on Binary Trees


// void levelOrderTraversal(Node* root) {
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* temp = q.front();
//         cout<<temp->data<<"\t";
//         q.pop();


//         if(temp->left) {
//             q.push(temp->left);
//         }

//         if(temp->right) {
//             q.push(temp->right);
//         }

//     } 
// }


void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }

        else {
            cout<<temp->data<<" ";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }

        }

    } 
}


int main() {

    Node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl;
    levelOrderTraversal(root);
    cout<<endl<<endl;


    return 0;
}