// Runtime: 12 ms, faster than 13.41% of C++ online submissions for Symmetric Tree.
// Memory Usage: 16.6 MB, less than 94.79% of C++ online submissions for Symmetric Tree.

class Solution 
{
public:
    bool Symmetric_helper(TreeNode* l, TreeNode* r)
    {
        if (l == nullptr && l == nullptr)
        {
            return true;
        }
        else if (l == nullptr || r == nullptr)
        {
            return false;
        }
        
        bool flag = l->val == r->val;
        flag &= Symmetric_helper(l->left,r->right);
        flag &= Symmetric_helper(l->right,r->left);
        return flag;
    }
    bool isSymmetric(TreeNode* root) 
    {
        return Symmetric_helper(root, root);
    }
};
