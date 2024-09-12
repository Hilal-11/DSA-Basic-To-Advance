#include<iostream>
#include<queue>
using namespace std;



class Node {
    public :
        int data;
        Node* left;
        Node* mid;
        Node* right;

    // Construnctor
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->mid = NULL;
        this->right = NULL;
    }
};

Node* buildTernaryTree(Node* root) {

    cout<<"Enter the data for Node :- "<<endl;
    int data;
    cin>>data;

    root = new Node(data);
    
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for Left of  "<<data<<endl;
    root->left = buildTernaryTree(root->left);
    cout<<"Enter data for Mid of  "<<data<<endl;
    root->mid = buildTernaryTree(root->mid);
    cout<<"Enter data for Right of  "<<data<<endl;
    root->right = buildTernaryTree(root->right);

    return root;
    
}


// Breadth-First-Search on Ternary Trees
// Level-Order-Traversal on Ternary Trees

// void levelOrderTraversal(Node* root) {
//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()) {
//         Node* temp = q.front();
//         cout<<temp->data<<"\t";
//         q.pop();

//         if(temp->left) {
//             q.push(temp->left);
//         }
//         if(temp->mid) {
//             q.push(temp->mid);
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

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();


        if(temp == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<temp->data<<"\t";
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->mid) {
                q.push(temp->mid);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }

       
    }
}


int main() {
    Node* root = NULL;
    root = buildTernaryTree(root);
    cout<<endl<<endl;
    levelOrderTraversal(root);
    cout<<endl<<endl;
    
    return 0;
}