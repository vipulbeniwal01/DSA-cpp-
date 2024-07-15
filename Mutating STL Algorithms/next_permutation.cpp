#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    next_permutation(arr,arr+5);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
}