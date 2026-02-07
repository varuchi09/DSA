#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,4,4,3,5,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int sec_min = INT_MAX;
    for(int i = 1; i<n; i++){
        if(arr[i] < min){
            sec_min = min;
            min = arr[i];
        }
        else if(arr[i] > min && arr[i] < sec_min){
            sec_min = arr[i];
        }
    }
    cout<<"second smallest element "<< sec_min;
    return 0;
}