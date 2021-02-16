// Runtime: 224 ms, faster than 87.43% of C++ online submissions for Minimum Depth of Binary Tree.
// Memory Usage: 144.7 MB, less than 68.04% of C++ online submissions for Minimum Depth of Binary Tree.
class Solution {
public:
    int minDepth(TreeNode* root) {
        int minimumDepth = 1;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=0,n=q.size();i<n;i++){
                TreeNode* p = q.front();
                q.pop();
                if(p->left==NULL && p->right==NULL) return minimumDepth;
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            minimumDepth++;
        }
        return minimumDepth;
    }
};
