// Runtime: 12 ms, faster than 93.90% of C++ online submissions for Find Bottom Left Tree Value.
// Memory Usage: 22.2 MB, less than 8.62% of C++ online submissions for Find Bottom Left Tree Value.

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
   int findBottomLeftValue(TreeNode* root) {
        if(root==NULL)
         {
            return NULL;
         };
        queue<TreeNode*> q;
        int res = root -> val;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            res = q.front() -> val;
            for(int i = 0; i < size; i++){
                auto f = q.front();
                q.pop();
                if(f -> left){
                    q.push(f -> left);
                }
                if(f -> right){
                    q.push(f -> right);
                }
            }
        }
        return res;
    }
};
