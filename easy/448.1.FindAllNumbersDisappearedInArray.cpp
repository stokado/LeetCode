#include <vector>
#include <set>

using std::vector;
using std::set;

// Given an array nums of n integers where nums[i] is in the range [1, n],
// return an array of all the integers in the range [1, n] that do not appear in  nums

class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans {};
        set<int> setNums (nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); i++) {
            if (setNums.count(i) == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};