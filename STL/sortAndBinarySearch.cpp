#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {8,3,2,4,2};
    sort(arr,arr+5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+4,2)){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
    return 0;
}