#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int a) : data(a), right(NULL), left(NULL) {}
};

void traversal(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    traversal(root->left);
    traversal(root->right);
}

// INORDER = LEFT ROOT RIGHT
// PREORDER = ROOT LEFT RIGHT
// POSTORDER = LEFT RIGHT ROOT

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node (40);
    traversal(root);
}