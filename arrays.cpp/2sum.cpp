#include <bits/stdc++.h>
using namespace std;

// int main() {                                           // brute O(n^2)
//     int arr[] = {2,6,5,8,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 14;

//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                 cout<< i <<","<< j;
//             }
//         }
//     }
//     return 0;
// }

int main() {                                           // optimal O(n) + nlogn
    int arr[] = {2,6,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    sort(arr, arr+n);
    int left = 0, right = n-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<< "target found";
            return 0;
        }
        else if(sum < target){
            left++;
        }
        else right--;
    }

    cout<<"target not found";
    return 0;
}