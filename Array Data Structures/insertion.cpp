#include<iostream>
using namespace std;

int insertEle(int arr[], int n, int cap, int pos, int key){
    if(n==cap)
    return n;
    int idx=pos-1;
    for(int i=n-1; i>=idx; i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=key;
    return n+1;
}

int main(){
    int cap = 5;
    int arr[]= {4,5,2,7};
    int n = 4;
    int key, pos;
    cin>>key>>pos;
    n = insertEle(arr, n, cap, pos, key);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}