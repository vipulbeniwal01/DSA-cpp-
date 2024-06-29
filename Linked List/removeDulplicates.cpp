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

void remove(Node *head){
    Node *curr = head;
    Node *next = head->next;
    while(next != NULL){
        if(next->data == curr->data){
            Node *temp = next;
            curr->next = next->next;
            next=next->next;
            delete(temp);
        }
        else{
            curr=next;
            next=next->next;
        }
    }
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(20);
    Node *forth = new Node(30);
    Node *fifth = new Node(30);
    Node *sixth = new Node(30);
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    remove(head);
    Node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}