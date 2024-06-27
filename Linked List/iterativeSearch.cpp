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

void search(Node *head, int a){
    Node *ptr = head;
    while(ptr!=NULL){
        if(ptr->data == a){
            cout<<"Key Found"<<endl;
            return;
        }
        ptr = ptr->next;
    }
    cout<<"Key Not Found"<<endl;
    return;
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(40);
    first->next = second;
    second->next = third;
    int a;
    cin>>a;
    search(first, a);
    return 0;
}