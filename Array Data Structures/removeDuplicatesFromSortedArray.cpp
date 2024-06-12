#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int res=0;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res]){
            arr[res+1]=arr[i];
            res++;
        }
    }
    return res+1;
}

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int n =sizeof(arr)/sizeof(int);
    int x = removeDuplicates(arr, n);
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}