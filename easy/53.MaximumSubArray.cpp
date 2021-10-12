#include <vector>
#include <iostream>

using std::vector;

// Given an integer array nums, find the contiguous subarray which has the largest sum
// and return its sum.

class Solution {
    public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum = 0;
        for (int n : nums) {
            if (curSum < 0) {
                curSum = 0;
            }
            curSum += n;
            maxSub = std::max(maxSub, curSum);
        }
        return maxSub;
    }

};


int main() {
    vector<int> v {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    std::cout << sol.maxSubArray(v);
}