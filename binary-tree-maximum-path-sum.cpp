/**
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum_util(TreeNode *root,int &ans)
    {
        if(root==nullptr)
        {
        return 0;
        }
        int l_max = maxPathSum_util(root->left,ans);
        int r_max = maxPathSum_util(root->right,ans);
        int max1 = max(max(l_max,r_max) + root->val,root->val);
        int max2 = max(max1,l_max + r_max + root->val);
        ans = max(max2,ans);
        
        return max1;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
      maxPathSum_util(root,ans);
       return ans;    
    }
};
