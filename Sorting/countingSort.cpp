#include<iostream>
using namespace std;

void countSort(int arr[], int n,int k){
    int cout[k];
    for(int i=0; i<k; i++){
        cout[i]=0;
    }
    for(int i=0; i<n; i++){
        cout[arr[i]]++;
    }
    for(int i=1; i<k; i++){
        cout[i] = cout[i-1]+cout[i];
    }
    int output[n];
    for(int i=n-1; i>0; i--){
        output[cout[arr[i]]-1]=arr[i];
        cout[arr[i]]--;
    }
    for(int i=0; i<n; i++){
        arr[i]=output[i];
    }
}

int main(){
    int arr[] = {0,1,1,2,3,4};
    int k = 5;
    countSort(arr, 6, k);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}