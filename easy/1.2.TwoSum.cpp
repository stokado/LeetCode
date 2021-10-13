#include <vector>
#include <map>
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
        std::map<int, int> ValToInd;
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i){
            int val = target - nums[i];

            if (ValToInd.find(val) != ValToInd.end()) {
                ans.push_back(ValToInd[val]);
                ans.push_back(i);
                break;
            }
            ValToInd[nums[i]] = i;
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