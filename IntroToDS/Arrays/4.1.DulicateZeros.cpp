#include <vector>
#include <iostream>

using std::vector;

// Given a fixed-length integer array arr, duplicate each occurence of zero,
// shifting the remaining elements to the right.

// O(N^2) bad solution

class Solution {
    public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1; i >= 0; --i) {
            if (arr[i] == 0 && i != n - 1) {
                for (int j = n - 2; j > i; --j) {
                    arr[j + 1] = arr[j];
                }
                arr[i + 1] = 0;
            }
        }
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
    vector<int> v {0, 0, 0};
    Solution sol;
    sol.duplicateZeros(v);
    std::cout << v;
}