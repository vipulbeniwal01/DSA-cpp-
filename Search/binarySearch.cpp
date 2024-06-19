#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,3,5,7,8,9};
    int key;
    cin>>key;
    int ans = binarySearch(arr, 7, key);
    cout<<ans<<endl;
}