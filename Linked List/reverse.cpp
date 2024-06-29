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

Node *reverseL(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    head = reverseL(head);
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}