#include<iostream>
using namespace std;

void largestElement(int arr[],int n){
    int j = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>j)
        j=arr[i];
    }
    cout<<j<<endl;
}

int main(){
    int arr[] = {2,3,9,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    largestElement(arr,n);
}