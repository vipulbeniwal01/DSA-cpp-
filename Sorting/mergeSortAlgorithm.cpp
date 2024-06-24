#include<iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1];
    int right[n2];
    for(int i = 0; i < n1; i++) {
        left[i] = arr[low + i];
    }
    for(int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }
    int I = 0, j = 0, k = low;
    while(I < n1 && j < n2) {
        if(left[I] <= right[j]) { // Corrected condition
            arr[k] = left[I]; I++; k++;
        } else {
            arr[k] = right[j]; j++; k++; 
        }
    }
    while(I < n1) {
        arr[k] = left[I]; I++; k++;
    }
    while(j < n2) {
        arr[k] = right[j]; j++; k++;
    }
}

void mergeSort(int arr[], int i, int j){
    if(i<j){
        int m = (i+j)/2;
        mergeSort(arr,i,m);
        mergeSort(arr,m+1,j);
        Merge(arr,i,m,j);
    }
}

int main(){
    int arr[] = {3,2,7,6,4,10};
    mergeSort(arr, 0, 5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}