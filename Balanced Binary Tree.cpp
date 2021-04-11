// Runtime: 4 ms, faster than 98.51% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 21 MB, less than 45.61% of C++ online submissions for Balanced Binary Tree.

class Solution {
public:
    int hieght(TreeNode* root){
        if(root==nullptr) return 0;
        int lh = hieght(root->left);
        int rh = hieght(root->right);
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        if (!isBalanced(root->left) || !isBalanced(root->right)) return false;
        int h1 = hieght(root->left);
        int h2 = hieght(root->right);
        int diff = abs(h1-h2);
        if(diff<=1) return true;
        return  false;
    }
};
