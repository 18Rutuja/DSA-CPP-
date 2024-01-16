#include <bits/stdc++.h>
using namespace std;
 //using map
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " --> " << x.second << endl;
}
 

//  int countFreq(int & arr) {
//         int n = sizeof(arr)/sizeof(arr[0]);
//         unordered_map<int, int> m;
        
//         for(int i = 0; i < n; i++){
//             m[arr[i]]++;
//         }
//         n = n/2;
//         for(auto x: m){
//             if(x.second > n){
//                 return x.first;
//             }
//         }
//         return 0;
//     }

int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int N = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr , N);
    return 0;
}
