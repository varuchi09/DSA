#include <bits/stdc++.h>
using namespace std;
   
// int main() {                        // brute  (nlogn + n) 
//     int arr[] = {1,3,4,7,6,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr+n);
//     int max = arr[n-1];
//     for(int i = n-2 ; i>0; i--){
//         if(arr[i] != max){
//             cout<< "second largest element "<<arr[i] ;  
//             break;
//         }  
//     }
//     return 0;
// } 


// int main(){                                 // better (2n)
//     int arr[] = {1,3,4,7,6,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = arr[0];
//     for(int i = 1; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     int sec_max = -1;
//     for(int i = 0; i<n; i++){
//         if(arr[i] > sec_max && arr[i] < max){
//             sec_max = arr[i];
//         }
//     }
//     cout<< "Second largest "<< sec_max;
//     return 0;
// }

int main(){                                   //optimal (n)
    int arr[] = {1,3,4,7,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int sec_max = -1;
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] > sec_max){
            sec_max = arr[i];
        }
    }
    cout<<"second largest element "<< sec_max;
    return 0;
}