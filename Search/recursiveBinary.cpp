#include<iostream>
using namespace std;

int iterativeBinary(int arr[],int low, int high, int key){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key)
        return iterativeBinary(arr, low, mid-1, key);
    else
        return iterativeBinary(arr, mid+1, high, key);
}

int main(){
    int arr[] = {2,4,5,6,6,7,8,9};
    int key;
    cin>>key;
    int ans = iterativeBinary(arr, 0, 8, key);
    cout<<ans<<endl;
}