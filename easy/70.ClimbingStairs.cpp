// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps.
// In how many distinct ways can you climb the top?

#include <iostream>
#include <vector>

// Bottom up method with memoization

class Solution {
    public:
    int climbStairs (int n) {
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        std::vector<int> v (n);
        v[0] = 1;
        v[1] = 2;
        for (int i = 2; i < v.size(); i++) {
            v[i] = v[i - 1] + v[i - 2];
        }
        return v[n - 1];
    }

};

int main() {
    Solution sol;
    std::cout << sol.climbStairs(4);
}