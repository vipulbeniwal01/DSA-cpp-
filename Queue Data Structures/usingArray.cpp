#include<iostream>
using namespace std;

struct Queue{
    int *arr;
    int rear;
    int sz;

    Queue(int a){
        arr = new int[a];
        rear = -1;
        sz = a;
    }

    void dequeue(){
        if(isEmpty()) return;
        for(int i=1; i<=rear; i++){
            arr[i-1] = arr[i];
        }
        rear--;
    }

    int getFront(){
        return arr[0];
    }

    int getRear(){
        return arr[rear];
    }

    bool isFull(){
        return rear == sz-1;
    }

    bool isEmpty(){
        return rear == -1;
    }

    int size(){
        return rear+1;
    }

    void enqueue(int a){
        if(isFull()){
            return;
        }
        rear++;
        arr[rear] = a;
    }

};

int main(){
    Queue q(5);
    q.enqueue(2);
    q.enqueue(6);
    q.enqueue(8);
    int a = q.getFront();
    cout<<a<<endl;
    int b = q.getRear();
    cout<<b<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.isFull()<<endl;
    cout<<q.size()<<endl;
    q.dequeue();
    cout<<q.getFront()<<endl;
}