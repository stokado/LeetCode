#include <vector>
#include <set>

using std::vector;
using std::set;

// Given an array nums containing n distinct numbers in the range [0, n], return
// the only number in the range that is missing from the array.

class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        set<int> setNums (nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size()) {
            if (setNums.count(i) == 0) {
                break;
            }
            ++i;
        }
        return i;
    }
};