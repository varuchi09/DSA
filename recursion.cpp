#include<bits/stdc++.h>
using namespace std;

int fact(int n){                               //factorial
    if (n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}

int sum(int x){                               // sum of n numbers
    if(x == 0) return 0;
    return x + sum(x-1);
}

void printName(int y){                           //printing n times
    if(y == 0) return;
    cout<< "VM" <<endl;
    printName(y-1);
}

void print(int z, int q){   
    if(z < 1) return;                                 // printing from n to 1
    cout<< z <<' ';
    print(z-1, q);
}

int main(){
    cout<< fact(5) <<endl;
    cout<< sum(5) <<endl;
    printName(4);
    print(3,1);
    return 0;
}