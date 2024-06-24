#include <iostream>
using namespace std;

void partition(int arr[], int index) {
    int ans[index+1];
    int left = 0, right = index;

    for(int i = 0; i <= index; i++) {
        if(arr[i] <= arr[index]) {
            ans[left++] = arr[i];
        } else {
            ans[right--] = arr[i];
        }
    }

    for(int j = 0; j <= index; j++) {
        arr[j] = ans[j];
    }
}

int main() {
    int arr[] = {3, 6, 8, 9, 10, 7};
    partition(arr, 5);
    for(int k = 0; k < 6; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}