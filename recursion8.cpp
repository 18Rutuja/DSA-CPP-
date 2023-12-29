#include <bits/stdc++.h>
using namespace std;
//ckeck if arr is palimdrome or not
bool isPalindrome( int i , string &s){
    int n = s.size();
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return isPalindrome(i+1 , s);
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(0 , s);
   return 0;
}