#include<iostream>
using namespace std;

int deleteEle(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(key==arr[i])
            break;
    }
    if(i==n)
    return n;
    for(int j=i; j<n-1; j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main(){
    int n=5;
    int arr[n];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    n = deleteEle(arr, n, key);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}