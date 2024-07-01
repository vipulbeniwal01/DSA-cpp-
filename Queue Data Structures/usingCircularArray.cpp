#include<iostream>
using namespace std;

struct Queue {
    int *arr;
    int cap, size, front;
    
    Queue(int a) {
        arr = new int[a];
        cap = a;
        size = 0;
        front = 0;
    }
    
    ~Queue() {
        delete[] arr;
    }
    
    bool isFull() {
        return cap == size;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    int getFront() {
        if (isEmpty()) return -1;
        else return arr[front];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        else return arr[(front + size - 1) % cap];
    }
    
    void enqueue(int x) {
        if (isFull()) return;
        int rear = (front + size) % cap;
        arr[rear] = x;
        size++;
    }
    
    void dequeue() {
        if (isEmpty()) return;
        front = (front + 1) % cap;
        size--;
    }
};

int main() {
    Queue q(5);
    q.enqueue(2);
    q.enqueue(6);
    q.enqueue(8);
    int a = q.getFront();
    cout << a << endl;
    int b = q.getRear();
    cout << b << endl;
    cout << q.isEmpty() << endl;
    cout << q.isFull() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
    
    return 0;
}