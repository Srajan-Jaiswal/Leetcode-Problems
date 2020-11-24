// Runtime: 32 ms, faster than 86.73% of C++ online submissions for K-diff Pairs in an Array.
// Memory Usage: 13.7 MB, less than 42.91% of C++ online submissions for K-diff Pairs in an Array.

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto it : nums)
            m[it]++;
        int ans = 0;
        if (k > 0) {
            for(auto i :m)
                if (m.find(i.first+k) != m.end()) 
                    ans++;
        } 
        else {
            for(auto it:m)
                if (it.second > 1)
                    ans++;
        }
        return ans;
    }
};
