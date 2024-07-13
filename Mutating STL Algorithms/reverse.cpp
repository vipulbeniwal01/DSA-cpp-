#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,arr+5);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    string str = "vipul";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}