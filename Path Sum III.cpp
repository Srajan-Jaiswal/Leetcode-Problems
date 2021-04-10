class Solution {
public:
    int cnt=0;
    void rec_path(TreeNode* root,int sum){
        if(root==nullptr){
             return;
        }
        if(root->val==sum){
            cnt+=1;
        } 
        sum -= root->val;
        rec_path(root->left,sum);
        rec_path(root->right,sum);
        return;
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==nullptr){
            return 0;
        }
        rec_path(root,sum);
        pathSum(root->left,sum);
        pathSum(root->right,sum);
        return cnt;
    }
};
