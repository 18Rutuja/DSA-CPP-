#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size() - 1; // Range: [1, n]
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;
            
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }
            
            if (count > mid) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};

int main() {
    // Example usage
    vector<int> nums = {1, 3, 8, 1, 2}; // Example input array
    
    Solution solution;
    int duplicate = solution.findDuplicate(nums);
    
    cout << "The duplicate number is: " << duplicate << endl;
    
    return 0;
}
