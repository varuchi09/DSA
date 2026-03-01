#include <bits/stdc++.h>
using namespace std;

int main() {                                           // brute O(n^2)
    int arr[] = {2,6,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 14;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                cout<< i <<","<< j;
            }
        }
    }
    return 0;
}