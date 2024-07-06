#include<iostream>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int capacity;

    public:

    MinHeap(int a){
        arr = new int[a];
        capacity = a;
        size = 0;
    }

    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size==capacity){
            cout<<"overflow"<<endl;
            return;
        }
        size++;
        arr[size-1]=x;
        int i = size-1;
        while(i!=0 and arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }
    ~MinHeap() {
        delete[] arr;
    }
};

int main(){
    MinHeap h(2);
    h.insert(10);
    h.insert(20);
}