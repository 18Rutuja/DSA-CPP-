#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;
        int i = 0, j = 0;
        
        // Merge the arrays while maintaining sorted order
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                mergedArray.push_back(nums1[i]);
                i++;
            } else {
                mergedArray.push_back(nums2[j]);
                j++;
            }
        }
        
        // Add remaining elements from nums1
        while (i < nums1.size()) {
            mergedArray.push_back(nums1[i]);
            i++;
        }
        
        // Add remaining elements from nums2
        while (j < nums2.size()) {
            mergedArray.push_back(nums2[j]);
            j++;
        }
        
        int n = mergedArray.size();
        if(n % 2 == 0) {
            // Even number of elements
            return (double)(mergedArray[n/2 - 1] + mergedArray[n/2]) / 2.0;
        } else {
            // Odd number of elements
            return mergedArray[n/2];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 4, 5};
    vector<int> nums2 = {2,9,2};

    Solution sol;
    double median = sol.findMedianSortedArrays(nums1, nums2);
    
    cout << "Median of the merged sorted arrays: " << median << endl;

    return 0;
}
