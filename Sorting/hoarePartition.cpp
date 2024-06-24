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
    int arr[] = {4,2,7,3,6,1,8};
    hoare(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//In this partition it is not necessary that pivot arrange in its right position but left side of elements 
//are samll then pivot and right side of the elements are large or equal to pivot