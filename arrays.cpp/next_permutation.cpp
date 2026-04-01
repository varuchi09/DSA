#include <bits/stdc++.h>
using namespace std;

// int main() {                                           // all permutations
//     int arr[] = {1,3,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr+n);
//     do{
//         cout<<arr[0]<<' '<<arr[1]<<" "<<arr[2]<<endl;
//     }
//     while(next_permutation(arr, arr+n));
//     return 0;
// }

int main(){                                     // optimal
    int arr[] = {2,4,3,5,5,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int indx  = -1;
    for(int i = n-2; i>0; i--){
        if(arr[i] < arr[i+1]){
            indx = i;
            break;
        }
    }
    if(indx == -1){
        reverse(arr, arr+n);
    }

    for(int i = n-1; i>indx; i--){
        if(arr[i] > arr[indx]){
            swap(arr[indx], arr[i]);
            break;
        }
    }
    sort(arr + indx + 1, arr + n);

    for(int i : arr){
        cout<< i <<' ';
    }
    return 0;
}
