#include<iostream>
using namespace std;

int secondLargestElement(int arr[], int n){
    int x=arr[0], y=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>x){
            y=x;
            x=arr[i];
        }
        else if(arr[i]!=x){
            if(arr[i]>y)
            y=arr[i];
        }
    }
    return y;
}

int main(){
    int arr[] = {10,10,10};
    int n = sizeof(arr)/sizeof(int);
    int i = secondLargestElement(arr, n);
    cout<<i<<endl;
}