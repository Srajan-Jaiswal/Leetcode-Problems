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
    TreeNode* dfs(TreeNode* root,int v,int d,bool dir){
        if(root == nullptr){
            if(d==1) return  new TreeNode(v);
            else return nullptr;
        }
        if(d==1){
            TreeNode* temp = new TreeNode(v);
            if(!dir) temp->left = root;
            else temp->right = root;
            return  temp;
        } 
        root->left = dfs(root->left,v,d-1,false);
        root->right = dfs(root->right,v,d-1,true);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1){
           TreeNode* temp = new TreeNode(v);
           temp->left = root;
           return  temp;
        }
        root->left = dfs(root->left,v,d-1,false);
        root->right = dfs(root->right,v,d-1,true);
        return root;
    }
};
