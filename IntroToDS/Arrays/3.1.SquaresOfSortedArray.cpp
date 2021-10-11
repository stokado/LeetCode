#include <vector>
#include <iostream>
#include <algorithm>
// Given an integer array of nums sorted in non-decreasing order,
// return an array of the squares of each number sorted in non-decreasing order.

using std::vector;

class Solution {
    public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans (nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            ans[i] = nums[i] * nums[i];
        }
        std::sort(ans.begin(), ans.end());
        return ans;
    }
};

std::ostream& operator <<(std::ostream& output, const vector<int> v) {
    bool first = true;
    for (const int& val : v) {
        output << val << ' ';
    }
    return output;
}

int main() {
    Solution sol;
    vector<int> v {-4, -1, 0, 3, 10};
    std::cout << sol.sortedSquares(v);
}