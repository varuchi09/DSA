#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 370;
    int dup = num;
    int sum = 0;
    while(num>0){
        int ld = num % 10;
        sum += ld*ld*ld;
        num = int(num /10);
    }
    if (sum == dup){
        cout<< "It is an armstrong no" <<endl;
    }
    else{
        cout<< "It is not an armstrong no" <<endl;
    }
    return 0;
}