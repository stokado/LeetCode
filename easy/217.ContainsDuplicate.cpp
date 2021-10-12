#include <vector>
#include <unordered_set>
#include <iostream>

using std::vector;
using std::unordered_set;

// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.

class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numsSet (nums.begin(), nums.end());
        if (numsSet.size() < nums.size()) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> v{1, 2, 3, 4, 4};
    std::cout << sol.containsDuplicate(v);

}