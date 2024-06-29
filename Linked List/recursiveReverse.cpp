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

Node *reverseL(Node *prev, Node *curr){
    if(curr==NULL) return prev;
    Node *next = curr->next;
    curr->next = prev;
    return reverseL(curr, next);
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    head = reverseL(NULL,head);
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}