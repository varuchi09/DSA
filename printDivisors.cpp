#include<bits/stdc++.h>
using namespace std;

void printDivisor(int num){
    vector<int> vec;
    for(int i = 1; i*i<=num ; i++){
        if(num % i ==0){
            vec.push_back(i);
            if((num/i) != i){
                vec.push_back(num/i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    for(auto it : vec){
        cout<< it <<' ';
    }
}

int main(){
    printDivisor(48);
    return 0; 
}
