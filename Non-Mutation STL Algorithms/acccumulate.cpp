#include<iostream>
#include<numeric>
using namespace std;

int myComp(int x, int y){
    return x*y;
}

int main(){
    int arr[]={10,20,30};
    int sum=0;
    cout<<accumulate(arr,arr+3,sum)<<endl; //this will add all the elements to sum
    int sub=100;
    // cout<<accumulate(arr,arr+3,sub,minus<int>); //this will minus all the elemnts from sub
    int mul=1;
    cout<<accumulate(arr,arr+3,mul,myComp); //this will multiply all the elements to mul
    return 0;
}