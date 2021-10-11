#include <vector>
#include <iostream>

using std::vector;

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curCons = 0;
        int maxCons = 0;
        for (const int& val : nums) {
            if (val == 1) {
                curCons++;
                maxCons = std::max(maxCons, curCons);
            } else {
                curCons = 0;
            }
        }
        return maxCons;
    }
};

// {0, 0, 0}
// {1, 0, 0}
// {0, 0, 1}
// { }
// {1, 1, 1}

int main() {
    Solution sol;
    vector<int> v {1, 1, 1, 1, 1};
    std::cout << sol.findMaxConsecutiveOnes(v);
}