#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,4,2,5,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<< "enter the target : "<< endl;
    cin>> num;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            cout<< num <<" found at "<< i << endl;
            return 0;
        }
    }  
    cout<< "-1" ;
    return 0;
}