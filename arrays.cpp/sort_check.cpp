#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,3,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cout<< "array not sorted";
            return 0;
        }
    }
    cout<< "array is sorted";
    return 0;
}