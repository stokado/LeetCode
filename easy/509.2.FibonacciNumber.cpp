#include <iostream>
#include <vector>

// with memoization

// The Fibonacci numbers, comonly denoted F(n) form a sequence,
// called the Fibonacci squence, such that each number is
// the sum of the two preceding ones, starting from 0 and 1.

// F(0) = 0, F(1) = 1
// F(n) = F(n-1) + F(n-2), for n > 1

// Given n, calculate F(n).

class Solution {
    public:
    int fib (int n) {
        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        std::vector<int> v(n);
        v[0] = v[1] = 1;
        for (int i = 2; i < v.size(); i++) {
            v[i] = v[i - 1] + v[i - 2];
        }
        return v[n - 1];
    }
};

int main() {
    Solution sol;
    std::cout << sol.fib(2);
}