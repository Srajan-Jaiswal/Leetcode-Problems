// Runtime: 20 ms, faster than 88.15% of C++ online submissions for Kth Smallest Element in a BST.
// Memory Usage: 24.6 MB, less than 69.30% of C++ online submissions for Kth Smallest Element in a BST.
class Solution {
public:
    int i=1;
    int ans=0;
    
    void inorder(TreeNode* root, int k){
        if(root==nullptr){
            return;
        }    
        
        inorder(root->left, k);
        if(i==k){
            ans=root->val;
        }
        i++;
        inorder(root->right, k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
       inorder(root, k);
        return ans;
    }
};
