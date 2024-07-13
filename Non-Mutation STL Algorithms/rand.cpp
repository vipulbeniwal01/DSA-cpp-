#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    for(int i=0; i<5; i++){
        cout<<rand()<<endl;
    }
}