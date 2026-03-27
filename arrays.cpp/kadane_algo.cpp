#include <bits/stdc++.h>
using namespace std;

// int main() {                                       //better,brute
//     int arr[] = {2,3,-5,6,8,-3,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mss = INT_MIN;

//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             mss = max(sum, mss);
//         }
//     }
//     cout<<"Maximum subarray sum = "<<mss;
//     return 0;
// }

int main() {                                        //optimal
    int arr[] = {2,3,-5,6,8,-3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int mss = INT_MIN;
    int sum = 0;
    for(int i = 0; i<n; i++){
            sum += arr[i];
            mss = max(sum, mss);
            if(sum < 0){
                sum = 0;
            }
            
    }
    cout<< "Maximum subarray sum = "<<mss;
    return 0;   
}