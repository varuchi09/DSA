#include <bits/stdc++.h>
using namespace std;
//elemet appearing once and others twice

// int main() {                                       //brute
//     int arr[] = {1,1,2,2,3,4,4};                     // TC O(n*n)  SC O(1)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<n; i++){
//         int num = arr[i];
//         int cnt = 0;
//         for(int j = 0; j<n; j++){
//             if(arr[j] == num){
//                 cnt++;
//             }
//         }
//         if(cnt == 1){
//             cout<< "element appearing once is "<<num;
//         }
//     }
//     return 0;
// }


 int main() {                                       //optimal
    int arr[] = {1,1,2,2,3,4,4};                     // TC O(n)  SC O(1)
    int n = sizeof(arr)/sizeof(arr[0]);
    int xorr = 0;
    for(int i = 0; i<n; i++){
        xorr ^= arr[i];
    }
    cout<< "Number appearing once is "<<xorr;
    return 0;
 }
