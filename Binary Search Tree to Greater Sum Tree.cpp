// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Search Tree to Greater Sum Tree.
// Memory Usage: 8.6 MB, less than 44.48% of C++ online submissions for Binary Search Tree to Greater Sum Tree.

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
    TreeNode* makeGST(TreeNode* root, int &max)
    {
        if(root == nullptr)
        {
            return root;
        }
        makeGST(root->right,max);
        max += root->val;
        root->val = max;
        makeGST(root->left,max);
        
        return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int max = 0;
        return makeGST(root,max);
    }
};
