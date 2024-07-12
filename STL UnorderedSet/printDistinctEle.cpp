#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[] = {4,8,5,8,7,5};
    unordered_set<int> m(arr,arr+6);
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<*it<<" ";
    }
}