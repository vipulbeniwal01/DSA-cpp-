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

Node *insertPos(Node *head, int pos, int data){
    Node *newNode = new Node(data);
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }
    
    Node *ptr = head;
    int a = 1;
    while(ptr != NULL && a < pos - 1){
        ptr = ptr->next;
        a++;
    }

    if (ptr != NULL) {
        newNode->next = ptr->next;
        ptr->next = newNode;
    }

    return head;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;

    int a, b;
    cin >> a >> b;
    head = insertPos(head, a, b);

    Node *ptr = head;
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}