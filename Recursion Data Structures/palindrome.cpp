#include<iostream>
using namespace std;

bool palindrome(string n, int start, int end){

    if(start>=end)
    return true;
    
    return n[start]==n[end] and palindrome(n, start+1, end-1);

}

int main(){
    string n;
    cin>>n;
    int a = n.length();
    bool flag = palindrome(n, 0, a-1);
    if(flag)
    cout<<"This string is plaindrome."<<endl;
    else
    cout<<"This string is not planidrome."<<endl;
}