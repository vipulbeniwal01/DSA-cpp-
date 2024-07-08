#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedByMarks(int marks[], int rollNo[], int n){
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        v.push_back(make_pair(marks[i], rollNo[i]));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].second << " " << v[i].first << endl;
    }
}

int main(){
    int marks[] = {90, 80, 75, 85};
    int rollNo[] = {21, 22, 23, 24};
    printSortedByMarks(marks, rollNo, 4);
    return 0;
}