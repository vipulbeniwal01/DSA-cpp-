#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {2,4,5,7,8,9};
    int x=2;
    if(binary_search(arr,arr+6,x)==true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}