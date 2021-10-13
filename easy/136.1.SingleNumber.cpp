#include <vector>
#include <map>
#include <iostream>

using std::vector;

// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.

// TODO:
// O(N) - time complexity
// O(1) - extra space

class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        std::map<int, int> numsMap;
        for (int i = 0; i < nums.size(); i++) {
            numsMap[nums[i]]++;
        }
        int ans;
        for (const auto& val : numsMap) {
            if (val.second == 1) {
                ans = val.first;
                break;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> v {4, 1, 2, 1, 2};
    Solution sol;
    std::cout << sol.singleNumber(v);
}