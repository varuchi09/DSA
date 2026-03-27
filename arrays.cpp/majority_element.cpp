#include <bits/stdc++.h>
using namespace std;

// int main() {                                        //brute
//     int arr[] = {2,2,4,3,3,3,2,3,3};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0; i < n; i++){
//         int cnt = 0;
//         for(int j = 0; j<n; j++){
//             if (arr[i] == arr[j]){
//                 cnt++;
//             }
//         }
//         if(cnt > (n/2)){
//             cout<< "Majority element "<<i;
//             return 0;
//         }
//     } 
//     return 0;
// }


int main() {                                        //optimal
    int arr[] = {2,2,4,3,3,3,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ele;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(cnt == 0){
            ele = arr[i];
            cnt++;
        }
        else if(ele == arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == ele);
        cnt1++;
    }
    if(cnt1 > n/2){
        cout<< "Majority element "<< ele;
    }
    return 0;
}
