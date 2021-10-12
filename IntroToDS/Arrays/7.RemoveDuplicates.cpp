#include <vector>
#include <iostream>

using std::vector;

// Given an integer arrays sums sorted in non-decreasing order, remove the duplicates in-place
// such that each unique element appears only once. The relative order should be kept the same.


class Solution {
    public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int i = 0, j = 0;
        while (j < nums.size()) {
            if (nums[j] != nums[i]) {
                i++; 
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};

int main() {
    vector<int> v {};
    Solution sol;
    std::cout << sol.removeDuplicates(v);
}