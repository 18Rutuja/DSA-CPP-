#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    static int minValue(string s, int k) {
        unordered_map<char, int> str;
        for (char ch : s) {
            str[ch]++;
        }
        
        priority_queue<int> pq;
        for (auto pair : str) {
            pq.push(pair.second);
        }
        
        while (k > 0) {
            int curr = pq.top();
            pq.pop();
            pq.push(curr - 1);
            k--;
        }
        
        int ans = 0;
        while (!pq.empty()) {
            int curr = pq.top();
            pq.pop();
            ans += (curr * curr);
        }
        
        return ans;
    }
};

int main() {
    cout << Solution::minValue("ccbcbd", 2) << endl; // Output should be 3
    return 0;
}
