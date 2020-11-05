Runtime: 60 ms, faster than 48.61% of C++ online submissions for Sum of Nodes with Even-Valued Grandparent.
Memory Usage: 39.9 MB, less than 5.11% of C++ online submissions for Sum of Nodes with Even-Valued Grandparent.

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        queue<TreeNode*> q,even;
        int sum=0;
        if(!root) 
        {
            return sum;
        }
        q.push(root);
        while(!q.empty()){
            TreeNode* cur= q.front();
            q.pop();
            if(cur->val%2==0) 
            {
                even.push(cur);
            }
                while(!even.empty()){
                TreeNode* temp= even.front(); 
                    even.pop();
                if(temp->left){
                    if(temp->left->left)
                    {
                        sum+=temp->left->left->val;
                    }
                    if(temp->left->right)
                    {
                        sum+=temp->left->right->val;
                    }
                }
                    if(temp->right){
                    if(temp->right->left)
                    {
                        sum+= temp->right->left->val;
                    }
                    if(temp->right->right)
                    {
                        sum+= temp->right->right->val;
                    }
                }
            }
            if(cur->left) 
            {
                q.push(cur->left);
            }
            if(cur->right)
            {
                q.push(cur->right);
            }
        }
        return sum;
    }
};
