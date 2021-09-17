class Solution {
public:
    int maxLevelSum(TreeNode* root) {
       unordered_map<int,vector<int>> um;
       queue<TreeNode*> q;
       q.push(root); 
       int maxi = INT_MIN,sum,level=0;
       while(!q.empty()){
           level++;
           int size = q.size();
           sum=0;
           for(int i=0;i<size;i++){ 
              TreeNode* fr = q.front();
              q.pop(); 
              sum += fr->val;
              if(fr->left) q.push(fr->left);
              if(fr->right) q.push(fr->right); 
           }
           um[sum].push_back(level);
       }
       for(auto it : um){
          maxi = max(it.first,maxi);
       } 
       return  um[maxi][0]; 
    }
};
