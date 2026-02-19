#include <bits/stdc++.h>
using namespace std;
 
// int main() {                                          // brute
//     int a[] = {1,1,2,4,5,5,6};                       // (n1 * n2) TC
//     int b[] = {1,2,3,4,5,6,6,7,8};                   // (n) SC
//     int n1 = sizeof(a)/sizeof(a[0]);                  
//     int n2 = sizeof(b)/sizeof(b[0]);

//     set<int> s = {};

//     for(int i = 0; i<n1; i++ ){
//         for(int j = 0; j<n2; j++){
//             if(a[i] == b[j]){
//                 s.insert(a[i]);
//             }
//         }
//     }
//     for(auto it : s){
//         cout<< it <<" ";
//     }
//     return 0;
// }

int main() {                                          // optimal
    int a[] = {1,1,2,4,5,5,6};                       // (n1 + n2) TC
    int b[] = {1,2,3,4,5,6,6,7,8};                   // (1) SC excludling output
    int n1 = sizeof(a)/sizeof(a[0]);                  
    int n2 = sizeof(b)/sizeof(b[0]);

    vector<int> v = {};

    int i = 0, j =0;
    while(i<n1 && j<n2){
        if(a[i] == b[j]){
            if(v.size() == 0 || v.back() != a[i]){
                v.push_back(a[i]);
            }
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i : v){
        cout<< i <<" ";
    }
    return 0;
}
