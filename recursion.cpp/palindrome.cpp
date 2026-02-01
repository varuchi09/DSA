#include<bits/stdc++.h>
using namespace std;

string palindrome(int i, string s, int n){
    if (i>=n/2) return "It is a palindrome";
    if(s[i] != s[n-i-1]) return "It is not a palindrome";
    return palindrome(i+1, s, n);
}

int main(){
    string s;
    cout<< "enter the string "<< endl;
    cin>> s;
    int n = s.size();
    cout<< palindrome(0, s, n);
    return 0;
}