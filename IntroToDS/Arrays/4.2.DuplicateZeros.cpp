#include <vector>
#include <iostream>

using std::vector;

// Given a fixed-length integer array arr, duplicate each occurence of zero,
// shifting the remaining elements to the right.

// O(N)

class Solution {
    public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ar (n + 1);
        for (int i = 0, j = 0; i < n; ++i) {
            if (arr[i] != 0) {
                ar[j] = arr[i];
            } else {
                ar[j] = arr[i];
                j++;
                ar[j] = arr[i];
            }
            j++;
            if (j >= n) {
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            arr[i] = ar[i];
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
    vector<int> v {0, 1, 0};
    Solution sol;
    sol.duplicateZeros(v);
    std::cout << v;
}