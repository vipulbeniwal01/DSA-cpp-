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

int search(Node *head, int a){
    
    if(head==NULL) return -1;
    if(head->data == a) return 1;
    else{
        int res = search(head->next, a);
        if(res == -1) return -1;
        else{
            return res+1;
        }
    }
}

int main(){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    int a;
    cin>>a;
    int ans = search(first, a);
    cout<<ans<<endl;
    return 0;
}