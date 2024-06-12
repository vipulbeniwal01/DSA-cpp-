#include<iostream>
using namespace std;

void leftRotate(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[] = {1,2,3,4};
    leftRotate(arr, 4);
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}