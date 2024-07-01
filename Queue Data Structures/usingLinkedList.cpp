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

struct Queue {
    Node *front, *rear;
    int size;
    Queue() : front(NULL), rear(NULL), size(0) {}
    void enque(int x){
        size++;
        Node *newNode = new Node(x);
        if(front==NULL){
            front = rear = newNode; return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    void deque(){
        if(front == NULL) return;
        Node *temp = front;
        front = front->next;
        temp->next = NULL;
        if(front == NULL) rear = NULL;
        delete(temp);
    }
    bool isEmpty(){
        return front == NULL;
    }
    int getFront(){
        return front->data;
    }
    int getRear(){
        return rear->data;
    }
};

int main() {
    Queue q;
    q.enque(2);
    q.enque(6);
    q.enque(8);
    int a = q.getFront();
    cout << a << endl;
    int b = q.getRear();
    cout << b << endl;
    cout << q.isEmpty() << endl;
    cout << q.size<< endl;
    q.deque();
    cout << q.getFront() << endl;
    
    return 0;
}