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

void traverse(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    traverse(head->next);
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    first->next = second;
    second->next = third;
    third->next = forth;
    traverse(first);
    return 0;
}