#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,8,3,4,1};
    int n = sizeof(arr);
    int key;
    cin>>key;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(key==arr[i])
            flag = true;
    }
    if(flag){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}