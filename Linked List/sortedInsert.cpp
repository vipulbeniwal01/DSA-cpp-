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

Node *insert(Node *head, int key){
    Node *newNode = new Node(key);
    if(head == NULL or key<head->data){
        newNode->next = head;
        return newNode;
    }
    Node *ptr = head;
    while(ptr->next != NULL and ptr->next->data < key){
        ptr=ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    return head;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    int key;
    cin>>key;
    head = insert(head, key);
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}