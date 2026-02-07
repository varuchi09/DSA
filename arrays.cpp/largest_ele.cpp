#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int arr[] = {2,4,3,1,6,4};               //brute TC (nlogn)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr+n);
//     cout<< "largest element  = "<< arr[n-1];
//     return 0;
// }


// int main(){
//     int arr[] = {2,4,3,1,6,4};               //better TC (n)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = *max_element(arr, arr+n);
//     cout<< "largest element  = "<< max;
//     return 0;
// }

int main(){
    int arr[] = {2,4,3,1,6,4};               //optimal TC (n)
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<< "largest element  = "<< max;
    return 0;
}

