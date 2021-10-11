#include <vector>

using std::vector;

// Given two integer arrays nums1 and nums2, sorted in non-decreasing orded, and two integers m and n,
// representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

class Solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0) {
            int k = i + j + 1;
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i--];
            } else {
                nums1[k] = nums2[j--];
            }
        }
        if ( i == -1) {
            for (int k = 0; k <= j; ++k) {
                nums1[k] = nums2[k];
            }
        }
    }
};

int main() {
    vector<int> nums1 {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 {2, 5, 6};
    int n = 3;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
}