#include<bits/stdc++.h>
using namespace std;
//print n to 1 by using backtracking
void print(int cnt, int n){
   
   // Base Condition.
   if(cnt > n)  
   return;
  // Count Incremente
   print(cnt+1,n);
   cout<<cnt<<endl;

}

int main(){
    int n;
    int cnt ;
    cin>>n;
 
    print(1,n);
  return 0;
}