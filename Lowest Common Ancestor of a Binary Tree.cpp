class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return  nullptr;
        }
        if(root == p or root == q ){
            return root;
        }
        TreeNode* leftLCA = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right,p,q);
        if(!leftLCA and !rightLCA){
          return nullptr;
        }
        if(!leftLCA) return rightLCA;
        if(!rightLCA) return leftLCA;
        return root;
    }
};
