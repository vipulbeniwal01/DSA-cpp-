#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[]={8,5,3,7,2,1,6};
    insertionSort(arr, 7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}