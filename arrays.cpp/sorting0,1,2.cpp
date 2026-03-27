#include <bits/stdc++.h>
using namespace std;

int main() {                                                // optimal dutch national flag algo
    int arr[] = {0,1,2,1,1,2,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return 0;
}