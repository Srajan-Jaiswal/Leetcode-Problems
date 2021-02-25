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
    int sum=0;
    queue<TreeNode*> q; 
    int bfs(TreeNode* root){
        if(root==nullptr){
          return  sum;
         }
        q.push(root);
        while(!q.empty()){
        TreeNode*  f = q.front();
            q.pop();
            sum++;
            if(f->left){
              q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
        return sum;
    }
    int countNodes(TreeNode* root){
         return bfs(root);
    }
};
