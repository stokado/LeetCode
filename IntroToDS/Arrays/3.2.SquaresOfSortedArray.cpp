#include <vector>
#include <iostream>
#include <algorithm>
// Given an integer array of nums sorted in non-decreasing order,
// return an array of the squares of each number sorted in non-decreasing order.

// using two pointers O(N)

using std::vector;

class Solution {
    public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans (n);

        int left = 0;
        int right = n - 1;
        int i = n - 1;
    
        while (left <= right) {

            int leftVal = abs(nums[left]);
            int rightVal = abs(nums[right]);

            if (leftVal > rightVal) {
                ans[i--] = leftVal * leftVal;
                left++;
            } else {
                ans[i--] = rightVal * rightVal;
                right--;
            }
        }
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