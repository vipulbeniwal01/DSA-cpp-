#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int a){
        data = a;
        right = NULL;
        left = NULL;
    }
};

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    cout<<height(root)<<endl;
    return 0;
}