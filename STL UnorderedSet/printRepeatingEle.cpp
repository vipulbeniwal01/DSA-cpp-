#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[] = {10,8,10,7,7,6};
    unordered_set<int> m;
    for(int i=0; i<6; i++){
        if(m.find(arr[i])==m.end()){
            m.insert(arr[i]);
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}