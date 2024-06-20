#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){
    int arr[] = {4,7,9,5,2,1,8};
    selectionSort(arr, 7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}

//This is not Stable Algorithm