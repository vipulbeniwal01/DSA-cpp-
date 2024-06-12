#include<iostream>
using namespace std;

void reversea(int arr[], int low, int high){
    while(low < high){
        // int temp = arr[low];
        // arr[low]=arr[high];
        // arr[high]=temp;
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int n, int d){
    reversea(arr, 0, d-1);
    reversea(arr, d, n-1);
    reversea(arr, 0, n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int d;
    cin>>d;
    leftRotate(arr, 5, d);
    // reversea(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}