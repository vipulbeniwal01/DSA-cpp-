#include<iostream>
using namespace std;

void subsets(string n, string curr="", int i=0){
    if(i==n.length()){
        cout<<curr<<endl;
        return;
    }
    subsets(n, curr, i+1);
    subsets(n, curr+n[i], i+1);
}

int main(){
    string n;
    cin>>n;
    subsets(n);
}