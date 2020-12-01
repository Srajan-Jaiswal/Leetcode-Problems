// Runtime: 784 ms, faster than 14.61% of C++ online submissions for Permutation Sequence.
// Memory Usage: 6.3 MB, less than 39.10% of C++ online submissions for Permutation Sequence.

class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for (int i = 1; i <= n; i++)
            s += to_string(i);
        int cnt = 1;
        while (cnt < k) {
            cnt++;
            next_permutation(s.begin(), s.end());
        }
        return s;
    }
};
