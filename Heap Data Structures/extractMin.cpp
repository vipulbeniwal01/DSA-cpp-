#include <iostream>
using namespace std;

class MinHeap {
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int a) {
        arr = new int[a];
        capacity = a;
        size = 0;
    }

    int left(int i) {
        return (2 * i + 1);
    }
    int right(int i) {
        return (2 * i + 2);
    }
    int parent(int i) {
        return (i - 1) / 2;
    }
    void insert(int x) {
        if (size == capacity) {
            cout << "Overflow" << endl;
            return;
        }
        size++;
        arr[size - 1] = x;
        int i = size - 1;
        while (i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void heapify(int i) {
        int smallest = i;
        int lt = left(i), rt = right(i);
        if (lt < size && arr[lt] < arr[i]) {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[smallest]) {
            smallest = rt;
        }
        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            heapify(smallest);
        }
    }
    int extractMin() {
        if (size == 0) {
            cout << "There is no element in the heap." << endl;
            return -1; 
        }
        if (size == 1) {
            size--;
            return arr[0];
        }
        int root = arr[0];
        arr[0] = arr[size - 1];
        size--;
        heapify(0);
        return root;
    }
    ~MinHeap() {
        delete[] arr;
    }
};

int main() {
    MinHeap h(2);
    h.insert(20);
    h.insert(10);
    cout << h.extractMin() << endl; 
    cout << h.extractMin() << endl; 
    return 0;
}