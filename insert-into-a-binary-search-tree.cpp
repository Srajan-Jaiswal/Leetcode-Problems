// Runtime: 120 ms, faster than 59.72% of C++ online submissions for Insert into a Binary Search Tree.
// Memory Usage: 60.2 MB, less than 91.51% of C++ online submissions for Insert into a Binary Search Tree.

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr)
        {
            return new TreeNode(val);
        }
        else if(root->val > val)
        {
          root->left = insertIntoBST(root->left,val);
        }
        else {
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
};
