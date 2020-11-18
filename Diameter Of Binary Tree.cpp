// Runtime: 12 ms, faster than 65.62% of C++ online submissions for Diameter of Binary Tree.
// Memory Usage: 21.1 MB, less than 34.96% of C++ online submissions for Diameter of Binary Tree.

class Solution {
public:
    int ans = INT_MIN;
  int diameter(TreeNode* root){
        if(root == nullptr)
        {
            return 0;
        }
        int hieghtl = diameter(root->left);
        int hieghtr = diameter(root->right);
        ans =  max(ans,1 + hieghtl+hieghtr);
       return 1+max(hieghtl,hieghtr);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        diameter(root);
        return ans-1;
    }
};
