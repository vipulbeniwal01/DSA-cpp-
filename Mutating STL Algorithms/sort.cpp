#include<iostream>
#include<algorithm>
using namespace std;

int myComp(int x, int y){
    return x>y;
}

int main(){
    int arr[]={2,5,3,8,1};
    sort(arr,arr+5);
    for(int x: arr){
        cout<<x<<" ";
    }
    sort(arr,arr+5,myComp);
    cout<<endl;
    for(int x: arr){
        cout<<x<<" ";
    }
}