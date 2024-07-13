#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {15,6,7,12,30};
    make_heap(arr,arr+5);
    cout<<arr[0]<<endl;
    make_heap(arr,arr+5,greater<int>());
    cout<<arr[0]<<endl;
    pop_heap(arr,arr+5);
    cout<<arr[0]<<endl;
    push_heap(arr,arr+5);
    cout<<arr[0]<<endl;
}