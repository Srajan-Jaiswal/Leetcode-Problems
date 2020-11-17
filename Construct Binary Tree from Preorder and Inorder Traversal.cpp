// Runtime: 20 ms, faster than 87.22% of C++ online submissions for Construct Binary Tree from Preorder and Inorder Traversal.
// Memory Usage: 27 MB, less than 23.27% of C++ online submissions for Construct Binary Tree from Preorder and Inorder Traversal.
class Solution {
public:
    unordered_map<int,int> mp;
    int index = 0;
    
    TreeNode* Helper(vector<int>& preorder, vector<int> &inorder, int start, int end){
        
        if(start>end){ 
            return  NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[index]);
        int position = mp[preorder[index++]]; 
        root->left = Helper(preorder,inorder,start,position-1); 
        root->right = Helper(preorder,inorder,position+1,end);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]  = i;
        }
        
        return Helper(preorder,inorder,0,inorder.size()-1);
    }
};
