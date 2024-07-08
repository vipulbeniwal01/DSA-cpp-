#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i=0; i<v.size(); i++){   //size function is applicatble on vectors not arrays
        cout<<v[i]<<" "; //cout<<v.at[i]<<" "; (at function will throw an exception if we try to access index out of bond)
    }
    cout<<endl;
    vector<int> v1(5,2);
    for(vector<int>::iterator i=v1.begin(); i!=v1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(vector<int>::reverse_iterator i=v.rbegin(); i!=v.rend(); i++){
        cout<<*i<<" ";
    }
    return 0;
}