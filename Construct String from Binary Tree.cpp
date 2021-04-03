// Runtime: 8 ms, faster than 98.70% of C++ online submissions for Construct String from Binary Tree.
// Memory Usage: 23.7 MB, less than 78.89% of C++ online submissions for Construct String from Binary Tree.

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
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    string s = "";
    void preorder(TreeNode* root){
     if(root==nullptr) return;
     s+='('+to_string(root->val);
     if(root->left) preorder(root->left);
     if(root->right && !root->left) s+="()";
     if(root->right) preorder(root->right);
      s+=')';
      return;   
    }
    string tree2str(TreeNode* t) {
        if(!t) return s;
        preorder(t);
        s.erase(s.begin());
        s.erase(s.end()-1);
        return s;
    }
};

