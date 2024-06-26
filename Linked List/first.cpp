#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void traverse(Node *head){
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main(){
    Node *head = new Node(2);
    Node *second = new Node(6);
    Node *third = new Node(8);
    head->next = second;
    second->next = third;
    traverse(head);
    return 0;
}