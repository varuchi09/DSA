#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,1,3,4,1,1,1,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 0;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            cnt++;
            m = max(m,cnt);
        }
        else{
            cnt = 0;
        }
    }
    cout<< "max consecutive 1s "<<m;
    return 0;
}