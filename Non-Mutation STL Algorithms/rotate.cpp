#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60};
    rotate(arr,arr+2,arr+6);
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}