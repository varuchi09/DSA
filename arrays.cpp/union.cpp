#include <bits/stdc++.h>
using namespace std;

// union of sorted array

// int main() {                                           //brute
//     int a[] = {1,2,4,4,5,3,6};
//     int b[] = {3,4,2,5,6,3,7,4,8};
//     int n1 = sizeof(a)/sizeof(a[0]);
//     int n2 = sizeof(b)/sizeof(b[0]);

//     set<int> s = {};

//     for(int i = 0; i<n1; i++){                       // n1 logn
//         s.insert(a[i]);
//     }
//     for(int i = 0; i<n2; i++){                       // n2 logn
//         s.insert(b[i]);
//     }
//     int u[s.size()] = {};                                n1 + n2
//     int i = 0;
//     for(auto it : s){
//         u[i] = it;
//         i++;
//     }
//     for(auto it : u){                                  n1 + n2
//         cout<< it << ' ';
//     }

//     return 0;
// }

int main() {                                           //optimal (two pointer)
    int a[] = {1,1,2,3,4,5,5,6};
    int b[] = {1,2,3,3,4,5,6,6,7,8};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    vector<int> v = {};                                 // n1 + n2 (TC & SC)

    int i = 0;
    int j = 0;

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            if(v.size() == 0 || v.back() != a[i]){
                v.push_back(a[i]);
            }
            i++;
        }
        else{
            if(v.size() == 0 || v.back() != b[j]){
                v.push_back(b[j]);
            }
            j++;
        
        }
    }
    while(i<n1){
        if(v.size() == 0 || v.back() != a[i]){
            v.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(v.size() == 0 || v.back() != b[j]){
            v.push_back(b[j]);
        }
        j++;
    }
    for(auto it : v){
        cout<< it <<' ';
    }

    return 0;
}
