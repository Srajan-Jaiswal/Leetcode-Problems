class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr) return 0;
         int lh = height(root->left);
         int rh = height(root->right);
        return max(lh,rh)+1; 
    }
    void fill_mat(TreeNode* root, vector<vector<string>> &ans,int h){
        int row = ans.size();
        int col = ans[0].size();
         queue<pair<TreeNode*,pair<int,int>>> q;
         q.push({root,{0,(col-1)/2}});
         ans[0][(col-1)/2] = to_string(root->val);
         
         while(!q.empty()){
             int size = q.size();
             for(int i=0;i<size;i++){
                 pair<TreeNode*,pair<int,int>> fr = q.front();
                 q.pop();
                 int i_x = fr.second.first;
                 int j_y = fr.second.second;
                 if(fr.first->left){
                     int l=j_y-pow(2,h-i_x-2);
                     ans[i_x+1][l] = to_string(fr.first->left->val);
                     q.push({fr.first->left,{i_x+1,l}});
                 }
                 if(fr.first->right){
                     int r=j_y+pow(2,h-i_x-2);
                     ans[i_x+1][r] = to_string(fr.first->right->val);
                     q.push({fr.first->right,{i_x+1,r}});
                 }
             }
         }
    }
    vector<vector<string>> printTree(TreeNode* root) {
       int h = height(root);
       int width = pow(2,h)-1;
       vector<vector<string>> ans(h,vector<string>(width,""));
       fill_mat(root,ans,h);
       return ans;
    }
};
