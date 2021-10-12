#include <vector>
#include <iostream>
#include <algorithm>
#include <assert.h>

// Given an integer array nums and an integer val, remove all occurences of val in nums in-place.
// O(N)

using std::vector;

class Solution{
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int i = 0;
        while (i < k) {
            if (nums[i] == val) {
                nums[i] = nums[k - 1];
                k--;
            } else {
                i++;
            }
        }
        return k;
    }

};

int main() {
    
    vector<int> nms {3,2,2,3};
    int val = 3;
    // output 2, nums = [0, 1, 4, 0, 3, , , ]
    Solution sol;
    std::cout << sol.removeElement(nms, val);


}