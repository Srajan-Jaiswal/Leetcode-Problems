// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Postorder Traversal.
// Memory Usage: 8.5 MB, less than 57.46% of C++ online submissions for Binary Tree Postorder Traversal.

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
    vector<int> v;
public:
    void dfs(TreeNode* root){
        if(root==nullptr){
        return ;
    }
        dfs(root->left);
        dfs(root->right);
        v.push_back(root->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
         dfs(root);
         return v;  
    }
};
