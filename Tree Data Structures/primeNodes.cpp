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
        cout<<root->data<<endl;
    }
    primeNodes(root->left,k);
    primeNodes(root->right,k);
}

int main(){
    Node *root = new Node(10);
    root->right = new Node(20);
    root->right->right = new Node(30);
    root->right->right->right = new Node(40);
    root->left = new Node(50);
    int k;
    cin>>k;
    primeNodes(root, k+1);
}