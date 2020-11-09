// Runtime: 56 ms, faster than 67.12% of C++ online submissions for Search in a Binary Search Tree.
// Memory Usage: 35.7 MB, less than 18.49% of C++ online submissions for Search in a Binary Search Tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : 
        val(0),
        left(nullptr),
        right(nullptr) 
        {
        
        }
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            return  nullptr;
        }
        if(root->val==val)
        {
            return root;
        }
        else if(root->val>val)
        {
            return searchBST(root->left,val);
        }
        else{
            return searchBST(root->right,val);
        }
    }
};
