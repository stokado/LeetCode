#include <vector>
#include <iostream>

using std::vector;

// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.

// O(N) - time complexity
// O(1) - extra space

class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (const int& val : nums) {
            ans ^= val;
        }
        return ans;
    }
};

int main() {
    vector<int> v {4, 1, 2, 1, 2};
    Solution sol;
    std::cout << sol.singleNumber(v);
}