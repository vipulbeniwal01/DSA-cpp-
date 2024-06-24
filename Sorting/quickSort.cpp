#include<iostream>
using namespace std;

int lomuto(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void qSort(int arr[], int l, int h) {
    if(l < h) {
        int p = lomuto(arr, l, h);
        qSort(arr, l, p - 1);
        qSort(arr, p + 1, h);
    }
}

int main() {
    int arr[] = {4, 1, 3, 2, 7, 8, 9};
    qSort(arr, 0, 6);
    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}