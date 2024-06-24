#include<iostream>
using namespace std;

void lomuto(int arr[], int index){
    int i = -1;
    for(int j=0; j<=index; j++){
        if(arr[j]<arr[index]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[index]);
}

int main(){
    int arr[] = {70,60,80,40,30};
    lomuto(arr, 4);
    for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}