#include <bits/stdc++.h>
using namespace std;

bool sort_check(int arr[], int n){          
    if(n<=1) return true;
    return (arr[n-1] >= arr[n-2]) && sort_check(arr, n-1);
}

int main() {                                   // T.C = n
    int arr[] = {1,2,3,4,5};                   // S.C = n
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< sort_check(arr, n);

    return 0;
}