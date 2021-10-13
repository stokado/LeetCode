#include <vector>
#include <iostream>

using std::vector;

// Given an array of integer nms and an integer target,
// return indices of the two numbers such that they add up
// to target.

// Each input would have exactly one solution, and may you may not use
// element twice.
// Return the answer in any order.


class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans {};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if ((i != j) && ((nums[i] + nums[j]) == target)) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if (ans.size()) {
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums {3, 2, 4};
    vector<int> ans = sol.twoSum(nums, 6);
    std::cin.get();
    
}