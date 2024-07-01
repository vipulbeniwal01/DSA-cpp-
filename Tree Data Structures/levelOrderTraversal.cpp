#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int a) : data(a), right(NULL), left(NULL) {}
};

void primeNodes(Node *root, int k){
    k--;
    if(root == NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    primeNodes(root->left,k);
    primeNodes(root->right,k);
}

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

int main(){
    Node *root = new Node(10);
    root->right = new Node(20);
    root->right->right = new Node(30);
    root->right->right->right = new Node(40);
    root->left = new Node(50);
    for(int i=0; i<height(root); i++){
        primeNodes(root, i+1);
        cout<<endl;
    }
}