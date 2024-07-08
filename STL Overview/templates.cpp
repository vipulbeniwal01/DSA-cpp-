#include<iostream>
using namespace std;

template<typename T>
T myMax(T a, T b){
    return (a>b)? a: b;
}

int main(){
    cout<<myMax<int>(10,20)<<endl;
    cout<<myMax<float>(10.2,13.2)<<endl;
}