//Runtime: 28 ms, faster than 93.03% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
//Memory Usage: 23.9 MB, less than 12.40% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          if(root == nullptr)
          {
              return nullptr;
          }        
          else if(p->val > root->val && q->val > root->val)
          {
              return lowestCommonAncestor(root->right,p,q);
          }
          else if(p->val < root->val && q->val < root->val)
          {
              return lowestCommonAncestor(root->left,p,q);
          }
         else{
            return root;
        }
    }
};
