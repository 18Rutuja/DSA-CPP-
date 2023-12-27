#include<bits/stdc++.h>
using namespace std;
//print 1 to n by using backtracking
void print(int cnt, int n){
   
   // Base Condition.
   if(cnt < 1)  
   return;
  // Count Incremente
   print(cnt-1,n);
   cout<<cnt<<endl;

}

int main(){
    int n;
    int cnt ;
    cin>>n;
 
    print(n,n);
  return 0;
}