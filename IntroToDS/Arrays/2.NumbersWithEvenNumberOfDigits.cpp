#include <vector>
#include <iostream>

using std::vector;

// Given an array of nums of integers, return how many of them contain an even number of digits.

class Solution{
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int v : nums) {
            int counter = 0;
            do {
                counter++;
            } while (v /= 10);
            if (counter % 2 == 0) {
                ans ++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> v {555,901,482,1771};
    std::cout << sol.findNumbers(v);
}