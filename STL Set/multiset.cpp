#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(40);
    cout<<ms.count(10)<<endl;
    cout<<ms.count(20)<<endl;
    return 0;
}