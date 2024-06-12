#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=res+1; i<n; i++){
        arr[i]=0;
    }
}

int main(){
    int n = 5;
    int arr[5];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveZeros(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}