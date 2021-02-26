// Runtime: 16 ms, faster than 51.35% of C++ online submissions for Find Largest Value in Each Tree Row.
// Memory Usage: 22.1 MB, less than 90.27% of C++ online submissions for Find Largest Value in Each Tree Row.
/**https://assets.leetcode.com/uploads/2020/08/21/largest_e1.jpg
 * Definition for a binary tree node.
 * struct TreeNode {https://assets.leetcode.com/uploads/2020/08/21/largest_e1.jpg
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
 /* vector<int> largestValues(TreeNode* root) {
 vector <int> ans;
  if (root == nullptr) return ans;
  queue <TreeNode *> q;
  q.push(root);
  while(!q.empty()){
      int s= q.size();
      int maxi = INT_MIN;
      while(s--){
      TreeNode *f = q.front();
      q.pop();
      maxi = max(maxi , f->val);
      if (f->left){
          q.push(f->left);
      }
      if(f->right){
          q.push(f->right);
      }
  }
      ans.push_back(maxi);
  }
  return ans;
  }*/
    
   vector<int> ans; 
  
   void dfs(TreeNode* root,int level,vector<int> &ans)
   {
       if(root==nullptr) return;
       if(ans.size() == level){
           ans.push_back(root->val);
       }
       else ans[level] = max(ans[level],root->val);
       dfs(root->left,level+1,ans);
       dfs(root->right,level+1,ans);
   }
   vector<int> largestValues(TreeNode* root) {
     vector<int> ans; 
     dfs(root,0,ans);  
     return ans;  
  }
};
