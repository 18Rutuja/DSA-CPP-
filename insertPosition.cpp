#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class
    int n;
    int target;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the target: ";
    cin >> target;
    vector<int> nums;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num); // Add elements to the vector
    }

    int index = solution.searchInsert(nums, target);

    cout << "The target should be inserted at index: " << index << endl;

    // Print the modified nums vector or index
    // For example:
    // for (int i = 0; i < nums.size(); i++) {
    //     cout << nums[i] << " ";
    // }
    return 0;
}
