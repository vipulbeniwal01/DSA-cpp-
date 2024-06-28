// delete nth node from the last
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

int deleteN(Node *head, int a){
    Node *first = head;
    Node *second = head;
    for(int i=0; i<a; i++){
        first=first->next;
    }
    while(first != NULL){
        first=first->next;
        second=second->next;
    }
    return second->data;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    int a;
    cin>>a;
    int ans = deleteN(head, a);
    cout<<ans<<endl;
    return 0;
}