#include<iostream>
using namespace std;
struct deque{
    int *arr;
    int rear, size, cap;
    deque(int x){
        arr = new int(x);
        rear = -1;
        size = 0;
        cap = x;
    }
    bool isFull(){
        return size == cap;
    }
    bool isEmpty(){
        return size == 0;
    }
    void inertFront(int a){
        if(isFull()) return;
        for(int i=size-1; i>=0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = a;
        size++;
        rear++;
    }
    void deleteFront(){
        if(isEmpty()) return;
        for(int i=0; i<size; i++){
            arr[i] = arr[i+1];
        }
        size--; 
        rear--;
    }
    void deleteRear(){
        if(isEmpty()) return;
        rear--;
    }
    void insertRear(int a){
        if(isFull()) return;
        rear++;
        arr[rear] = a;
    }
    int getFront(){
        if(isEmpty()) return -1;
        return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        return arr[rear];
    }
};
int main(){
    deque dq(5);
    dq.inertFront(10);
}