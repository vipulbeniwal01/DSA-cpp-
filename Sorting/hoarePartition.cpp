#include<iostream>
using namespace std;

void hoare(int arr[], int low, int high){
    int i=low-1, j=high+1;
    int pivot = arr[low];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return;
        }
        swap(arr[i],arr[j]);
    }
}

int main(){
    int arr[] = {4,2,1,3,6,7,8};
    hoare(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}