#include<bits/stdc++.h>
using namespace std;

int main(){                              //euclidean algo
    int a, b;
    cin>> a>> b;
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        cout<< "HCF = "<< b <<endl;
    }
    else{
        cout<< "HCF = "<< a <<endl;
    }
    return 0;
}