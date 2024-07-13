#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={2,3,1};
    prev_permutation(arr,arr+3);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}