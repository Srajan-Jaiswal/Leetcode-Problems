//Runtime: 20 ms, faster than 33.94% of C++ online submissions for Validate Binary Search Tree.
//Memory Usage: 21.9 MB, less than 97.24% of C++ online submissions for Validate Binary Search Tree.

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
 bool util(TreeNode* root, long long int min,long long int max)
{
  if(root == nullptr){
            return  true;
        }
        else if(root->val>min && root->val<max)
        {
            return util(root->left,min,root->val) && util(root->right,root->val,max);
        } 
       else{
           return false;
       }
}

class Solution {
    
public:
    bool isValidBST(TreeNode* root) {
      return util(root,LLONG_MIN,LLONG_MAX);
    }
};
