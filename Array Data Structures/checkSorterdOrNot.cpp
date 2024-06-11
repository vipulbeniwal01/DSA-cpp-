#include<iostream>
using namespace std;

bool decreasing(int arr[], int n){
    int j=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>j){
            return false;
            break;
        }
        j=arr[i];
    }
    return true;
}

int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool sorted = decreasing(arr,n);
    if(sorted)
    cout<<"Array is sorted."<<endl;
    else
    cout<<"Array is not sorted"<<endl;
}