// Runtime: 28 ms, faster than 66.93% of C++ online submissions for Find Mode in Binary Search Tree.
// Memory Usage: 30.3 MB, less than 28.57% of C++ online submissions for Find Mode in Binary Search Tree.

class Solution {
public:
    vector<int> ans;
    unordered_map<int,int> um;
    int max = INT_MIN;
    void count_freq(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        count_freq(root->left);
        um[root->val]++;
        count_freq(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        count_freq(root);
        for(auto it : um)
        {
           if(max<it.second){
           max = it.second;
           }
         }
        for(auto it : um)
        {
           if(it.second == max){
           ans.push_back(it.first);
           }
         }
        return ans;
        }           
};
