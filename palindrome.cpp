#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 1331;
    int rev = 0;
    int dup = num;
    while(num>0){
        int last_digit = num % 10;
        rev = (rev * 10) + last_digit;
        num = int(num/10);
    }
    if (dup == rev){
        cout<< "It is a palindrome" <<endl;
    }
    else{
        cout<< "It is not a palindrome" <<endl;
    }
    return 0;
}