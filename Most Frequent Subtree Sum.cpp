// Runtime: 20 ms, faster than 72.68% of C++ online submissions for Most Frequent Subtree Sum.
// Memory Usage: 24.5 MB, less than 90.27% of C++ online submissions for Most Frequent Subtree Sum.

class Solution {
public:
    int dfs(TreeNode* root,unordered_map<int,int> &um){
        if(root==nullptr){
            return 0;
        }
        int l = dfs(root->left,um);
        int r = dfs(root->right,um);
        int sum =  root->val + l + r;
        um[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
       unordered_map<int,int> um;
        dfs(root,um);
        vector<int> v;
        int maxi = INT_MIN;
        for(auto it: um)  maxi = max(maxi,it.second);
        for(auto it: um){
            if(it.second == maxi)  v.push_back(it.first);
        }
        return  v;
    }
};
