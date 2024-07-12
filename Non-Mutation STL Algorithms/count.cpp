#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {2,4,3,5,7,4,5,4};
    cout<<count(arr,arr+8,4)<<endl;
    return 0;
}