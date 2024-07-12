#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    auto it = find(arr,arr+7,6);
    if(it==arr+7){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Element Found at Index: "<<it-arr<<endl;
    }
}