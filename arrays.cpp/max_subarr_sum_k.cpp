#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,1,3,4,2,2,3,1,2,1};                     // brute o(n^2)
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 7;
    int len = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    cout<<"Max sub array length is "<<len;
    return 0;
}