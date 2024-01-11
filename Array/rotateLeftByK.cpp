#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};


int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}

