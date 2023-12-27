#include<bits/stdc++.h>
using namespace std;
//print 1 to n 
void print(int cnt, int &n){
   
   // Base Condition.
   if(cnt == n+1)  return;
   cout<<cnt<<endl;
  // Count Incremente
  
   print(cnt+1,n);

}

int main(){
    int n;
    cin>>n;
    print(1,n);
  return 0;
}