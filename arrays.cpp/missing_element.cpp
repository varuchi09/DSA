#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n = 5;                                             //brute
//     int arr[] = {1,3,4,5};
//     for(int i = 0; i < 5; i++){
//         if(arr[i] != i + 1){
//             cout<< "missing element "<< i + 1;
//             break;
//         }
//     }
//     return 0;
// }

int main()
{ // better
    int arr[] = {1, 2, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        if (hash[i] == 0)
        {
            cout << "missing value is " << i;
        }
    }

    return 0;
}

// int main() {
//     int n = 5;                                             //optimal (using Sum)
//     int arr[] = {1,3,4,5};
//     int sum = (n*(n+1))/2;
//     int s = 0;
//     for(int i = 0; i<n-1; i++){
//         s+=arr[i];
//     }
//     cout<<"Missing element "<<sum-s;
//     return 0;
// }

// int main() {                                                   //using XOR
//     int n = 5;
//     int arr[] = {1,2,3,5};
//     int xor1 = 0;
//     int xor2 = 0;
//     for(int i = 0; i<n-1; i++){
//         xor2 = arr[i]^xor2;
//         xor1 = (i + 1)^xor1;
//     }
//     xor1 = xor1^n;
//     cout<< "Missing element "<< (xor2^xor1);
//     return 0;
// }
