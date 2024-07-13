#include<iostream>
#include<algorithm>
using namespace std;

int minDiff(int arr[], int n, int k){
    if(k>n) return -1;
    sort(arr,arr+n);
    int res = arr[k-1]-arr[0];
    for(int i=1; i+k-1<n; i++){
        res = min(res,arr[i+k-1]-arr[i]);
    }
    return res;
}

int main(){
    int arr[]={7,3,2,4,9,12,56};
    int k=3;
    cout<<minDiff(arr,7,k);
}