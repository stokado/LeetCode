#include <vector>

using std::vector;

// Given an array nums containing n distinct numbers in the range [0, n], return
// the only number in the range that is missing from the array.

class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        int sumExpected = 0;
        int sumCur = 0;
        for (int i = 0; i <= nums.size(); i++) {
            sumExpected += i;
        }
        for (const int& val : nums) {
            sumCur += val;
        }
        return (sumExpected - sumCur);
    }
};