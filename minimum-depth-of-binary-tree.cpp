Runtime: 16 ms, faster than 74.16% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 20 MB, less than 76.73% of C++ online submissions for Minimum Depth of Binary Tree


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
    int minDepth(TreeNode* root) {
        if(root == nullptr)
        {
         return 0;
        }
        if(root->left == nullptr  && root->right == nullptr) // when node is leaf
        {
            return 1;
        }
        int ls,rs;
        if(root->left)
             ls = minDepth(root->left);
        else
            ls = 1e9; 
        if(root->right)
             rs = minDepth(root->right);
        else 
            rs = 1e9;
        return (min(ls,rs)+1);
        }
};
