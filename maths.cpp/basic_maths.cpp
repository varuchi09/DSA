#include<bits/stdc++.h>
using namespace std;

int count(int num){    
    int cnt = 0;                        // num of digits
    while(num>0){
        int last_d = num % 10;
        cnt++;
        num = int(num/10);
    }
    return cnt; 
}

int rev(int n){  
    int r_num = 0;                            //reverse a num
    while(n>0){
        int ld = n % 10;
        r_num = (r_num*10) + ld;
        n = n/10;
    }
    return r_num;
}

int printDivisors(int x){                    // divisors of a no
    for(int i = 1; i<=x; i++){
        if(x % i == 0){
            cout<< i <<" ";
        }
    }
}

int main(){
    int digit = count(56743);
    cout<< digit <<endl;
    int r_num = rev(289645);
    cout<< r_num <<endl; 
    printDivisors(48);
    return 0;
}



