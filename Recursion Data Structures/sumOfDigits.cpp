#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0)
    return 0;
    return sumOfDigits(n/10)+n%10;
}

int main(){
    int n;
    cin>>n;
    int ans = sumOfDigits(n);
    cout<<ans<<endl;
    return 0;
}