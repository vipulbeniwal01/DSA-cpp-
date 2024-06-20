#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool flag;
    for(int i=0; i<n-1; i++){
        flag = true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
}

int main(){
    int arr[] = {5,8,3,9,2,6};
    bubbleSort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}

//This is stable Algorithm