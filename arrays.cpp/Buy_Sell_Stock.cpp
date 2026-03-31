#include <bits/stdc++.h>
using namespace std;

// Maximise profit

int main() {
    int arr[] = {4,6,2,1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mini = arr[0];
    int profit = 0;
    for(int i = 1; i<n; i++){
        int cost = arr[i] - mini;
        profit = max(cost, profit);
        mini = min(mini, arr[i]); 
    }
    cout<< "Maximum Profit = "<<profit;
    return 0;
}