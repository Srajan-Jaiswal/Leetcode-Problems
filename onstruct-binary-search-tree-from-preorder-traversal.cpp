// Runtime: 4 ms, faster than 89.12% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.
// Memory Usage: 14.1 MB, less than 5.25% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.


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
public:
    TreeNode* bstutil(vector<int>&preorder, int left, int right,  int &data)    
    {
        if(data >= preorder.size()){
            return NULL;
        }
        int val = preorder[data];
        
        if(left<val && right>val){
            data++;
            TreeNode *root = new TreeNode(val);
            root->left = bstutil(preorder,left,val,data);
            root->right = bstutil(preorder,val,right,data);
          
          return root;
        }
        return nullptr;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       int data=0;
       return bstutil(preorder, INT_MIN, INT_MAX, data) ;
    }
};
