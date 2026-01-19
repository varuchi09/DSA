#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int , int> p = {3,4};
    cout << p.first <<" "<< p.second <<endl;

    pair<pair<int, int>, pair<int, int>> z= {{3,4},{3,8}};
    cout << z.first.first <<" "<< z.first.second <<endl;
    cout << z.second.first <<" "<< z.second.second << endl;

    pair<int,int> arr[] = {{2,4},{6,7},{7,8}};
    cout << arr[1].second;
}