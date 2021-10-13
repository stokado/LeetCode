#include <vector>

using std::vector;

// Given an array nums of n integers where nums[i] is in the range [1, n],
// return an array of all the integers in the range [1, n] that do not appear in  nums

class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            int j = nums[i];                   
            if (j < 0) {                       
                j *= -1;
            }
            if (nums[j - 1] > 0) {             
                nums[j - 1] *= -1;             
            }
        }

        vector<int> ans {};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};

int main() {
    vector<int> v {};
    Solution sol;
    sol.findDisappearedNumbers(v);
}