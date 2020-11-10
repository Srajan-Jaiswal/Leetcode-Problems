// Runtime: 12 ms, faster than 99.50% of C++ online submissions for Trim a Binary Search Tree.
// Memory Usage: 17.7 MB, less than 12.01% of C++ online submissions for Trim a Binary Search Tree.

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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == nullptr)
        {
            return nullptr;
        }
        root->left = trimBST(root->left,low,high);
        root->right= trimBST(root->right,low,high);
        if(root->val > high)
        {
           return root->left;
        }
        else if(root->val < low)
        {
            return root->right;
        }
        return  root;
    }
};
