#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
// print name n time
// tc=O(n)/sc=O(n)
void print(){
   
   // Base Condition.
   if(cnt == 7)  
   return;
   cout<<"rutu"<<endl;
  // Count Incremente
   cnt++;
   print();

}

int main(){
    print();
  return 0;
}