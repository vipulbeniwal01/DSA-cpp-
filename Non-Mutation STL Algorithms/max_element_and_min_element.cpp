#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> l;
    l.push_back(4);
    l.push_back(3);
    l.push_back(5);
    l.push_back(2);
    cout<<*max_element(l.begin(),l.end())<<endl;
    cout<<*min_element(l.begin(),l.end());
}