#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int a){
        data = a;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int a){
    Node *ptr = new Node(a);
    ptr->next = head;
    return ptr;
}

void traverse(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    traverse(head->next);
}

int main(){
    Node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    traverse(head);
    return 0;
}