#include <vector>
#include <algorithm>

using std::vector;

// Given an array nums containing n distinct numbers in the range [0, n], return
// the only number in the range that is missing from the array.

class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        std::sort(nums.begin(), nums.end());
        while (i < nums.size()) {
            if (i - nums[i] < 0) {
                break;
            }
            i++;
        }
        return i;
    }
};