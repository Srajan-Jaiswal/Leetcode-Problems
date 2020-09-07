Runtime: 16 ms, faster than 69.38% of C++ online submissions for Path Sum.
Memory Usage: 21.3 MB, less than 55.78% of C++ online submissions for Path Sum.

/**
 * Definition for a binary tree node.
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
    bool haspathSumhelper(TreeNode* root,int res ,int sum)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->right==NULL && root->left==NULL )
        {
            res = res+root->val;
            if(res == sum)
            {
            return true;
            }
        }
        res= res+ root->val;     
        return haspathSumhelper(root->left,res,sum) || haspathSumhelper(root->right,res,sum); // when  both  are true
    }
public:
    bool hasPathSum(TreeNode* root, int sum) {
        return haspathSumhelper(root,0,sum); 
    }
};







