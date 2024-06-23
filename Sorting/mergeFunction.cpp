#include<iostream>
using namespace std;

void mergeSort(int arr[], int low, int mid, int high){
    int i=low, j=mid+1;
    while(i<mid+1 && j<high+1){
        if(arr[i]<=arr[j]){
            cout<<arr[i]<<" ";i++;
        }
        else{
            cout<<arr[j]<<" "; j++;
        }
    }
    while(i<mid+1){
        cout<<arr[i]<<" "; i++;
    }
    while(j<high+1){
        cout<<arr[j]<<" "; j++;
    }
}

int main(){
    int arr[] = {1,3,9,7,8,14,20};
    int low = 0, mid = 2, high = 6;
    mergeSort(arr, low, mid, high);
    return 0;
}