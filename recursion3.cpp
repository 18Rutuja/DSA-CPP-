#include<bits/stdc++.h>
using namespace std;
//print n to 1
void print(int cnt, int n){
   
   // Base Condition.
   if(cnt < 1)  
   return;
   cout<<cnt<<endl;
  // Count Incremente
  
   print(cnt-1,n);

}

int main(){
    int n;
    int cnt ;
    cin>>cnt;
 
    print(cnt,1);
  return 0;
}