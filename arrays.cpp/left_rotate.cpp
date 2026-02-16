#include <bits/stdc++.h>
using namespace std;

// int main() {                                         // by 1 place
//     int arr[] = {2,4,6,3,1};                         // TC O(n)
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int temp = arr[0];
//     for(int i = 1; i<n; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
//     for(int i = 0; i<n; i++){
//         cout<< arr[i] << ' ';
//     }
//     return 0;
// }

// int main() {                                         // by d places
//     int arr[] = {2,4,6,3,1};                           // brute
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<< "enter the value of d "<< endl;
//     int d;
//     cin>> d;
//     d = d % n;                                  // to remove extra rotations
//     int temp[d];                                         
//     for(int i = 0; i<d; i++){                       // O(n + d)
//         temp[i] = arr[i];
//     }

//     for(int j = d; j<n; j++){
//         arr[j-d] = arr[j];
//     }

//     for(int k = n-d; k<n; k++){
//         arr[k] = temp[k-(n-d)];
//     }

//     for(int i = 0; i<n; i++){
//         cout<< arr[i] << ' ';
//     }
//     return 0;
// }

int main() {                                         // by d places
    int arr[] = {2,4,6,3,1};                           // optimal
    int n = sizeof(arr)/sizeof(arr[0]);                // O(2n)

    cout<< "enter the value of d "<< endl;
    int d;
    cin>> d;

    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);

    for(int i = 0; i<n; i++){
        cout<< arr[i] << ' ';
    }
    return 0;
}




