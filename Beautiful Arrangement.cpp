class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    void backtrack(int n, vector<vector<int>>& ans, vector<int>& curr) {
        if (curr.size() == n)
            ans.push_back(curr);
        for (int i = 1; i <= n; i++) {
            if (count(curr.begin(), curr.end(), i))
                continue;
            int idx = curr.size();
            if (i % (idx + 1) != 0 && (idx + 1) % i != 0)
                continue;
            curr.push_back(i);
            backtrack(n, ans, curr);
            curr.pop_back();
        }
    }
    
    int countArrangement(int n) {    
        vector<vector<int>> ans;
        vector<int> curr;    
        backtrack(n, ans, curr);
        int cnt = 0;
        return ans.size();
    }
};
