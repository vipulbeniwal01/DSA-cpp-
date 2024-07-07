#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

void sortchar(int a[], string b[], int n){
    pair<int,string> p[n];
    for(int i=0; i<n; i++){
        p[i].first = a[i];
        p[i].second = b[i];
    }
    sort(p,p+n);
    for(int i=0; i<n; i++){
        cout<<p[i].second;
    }
}

int main(){
    int a[]={3,1,2,5,4};
    string b[]={"p","v","i","l","u"};
    sortchar(a,b,5);
    cout<<endl;
    return 0;
}