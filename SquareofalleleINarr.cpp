#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"enter no"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter arr element"<<endl;
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
    int ans[n];
    for(int i =0; i< n; i++){
        ans[i]=(arr[i]*arr[i]);
    }
    for(int i =0; i< n; i++){
      sort(ans , ans+n);
      cout<<ans[i]<<" ";
    }
    return 0;
}