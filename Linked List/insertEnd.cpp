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

Node *insertEnd(Node *head, int a){
    Node *newNode = new Node(a);
    Node *ptr = head;
    if(ptr == NULL){
        return newNode;
    }
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next = newNode;
    return head;
}

int main(){
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}