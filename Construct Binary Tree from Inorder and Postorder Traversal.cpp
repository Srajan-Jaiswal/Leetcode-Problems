class Solution {
public:
    int ans;
    TreeNode* Construct(vector<int> &inorder,vector<int> &postorder,int start,int end,int ans,unordered_map<int,int> &um){
        if(start > end){
            return nullptr;
        }
        int curr = postorder[ans];
        TreeNode* root = new TreeNode(postorder[ans]);
        ans--;
        if(start == end)
        {
            return root;
        }
        int  next =  um[curr];
        root->right = Construct(inorder,postorder,next+1,end,ans,um);
        root->left  = Construct(inorder,postorder,start,next-1,ans,um);
    
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> um;
        for(int i=0;i<inorder.size();i++)
        {
          um[inorder[i]] = i;
        }
        ans  = postorder.size()-1;
        return Construct(inorder,postorder,0,postorder.size()-1,ans,um);
    }
};
