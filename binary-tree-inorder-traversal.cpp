Runtime: 4 ms, faster than 50.67% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 10.7 MB, less than 5.00% of C++ online submissions for Binary Tree Inorder Traversal.

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
private:
    vector<int> in;
public:
    vector<int> inorderTraversal(TreeNode* root){
        if(root == nullptr)
        {
          return in;
        }
        inorderTraversal(root->left);
        in.push_back(root->val);
        inorderTraversal(root->right);
        return in;
    }
};
