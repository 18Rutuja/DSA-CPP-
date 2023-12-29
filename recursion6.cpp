#include <bits/stdc++.h>
using namespace std;
//n number sum
int print(int n){
    if(n==0)
    return 0;
  return n + print(n-1);
    
}
int main(){
    int n;
    cin>>n;
    int result = print(n);
    cout<<result<<endl;
}