Runtime: 12 ms, faster than 79.35% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 19.1 MB, less than 79.79% of C++ online submissions for Maximum Depth of Binary Tree.

/*
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
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int ls = maxDepth(root->left);
        int rs = maxDepth(root->right);
        return max(ls,rs)+1;
    }
};
