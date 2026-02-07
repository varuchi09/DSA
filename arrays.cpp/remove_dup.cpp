#include <bits/stdc++.h>
using namespace std;

int main() {                                  //optimal (n)
    int arr[] = {1,1,2,3,3,4,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<< "size of unique array "<< i+1;
    return 0;
}