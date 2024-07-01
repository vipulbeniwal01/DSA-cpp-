#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *right, *left;
    Node(int a): key(a), right(NULL), left(NULL) {}
};

int maximum(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(root->key, max(maximum(root->left), maximum(root->right)));
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->right = new Node(60);
    root->left->left = new Node(30);
    root->right->left=new Node(70);
    cout<<maximum(root)<<endl;
    return 0;
}