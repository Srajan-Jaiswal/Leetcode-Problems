Runtime: 4 ms, faster than 91.69% of C++ online submissions for Binary Tree Level Order Traversal.
Memory Usage: 12.6 MB, less than 78.55% of C++ online submissions for Binary Tree Level Order Traversal.

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> bfs;
        vector<int> level;
        queue<TreeNode*> q;
        TreeNode* r=root;
        if(r==NULL)
        {
         return bfs;
        }
        q.push(r);
        
        while(!q.empty())
        {
            int qs = q.size();
            while(qs>0)
            {
            TreeNode* f = q.front();
            level.push_back(f->val);
             q.pop()
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }
                qs--;
            }
            if(level.size()!=0)
            {
                bfs.push_back(level);
            }
            level.clear();
        }
        return bfs;
     }
};
