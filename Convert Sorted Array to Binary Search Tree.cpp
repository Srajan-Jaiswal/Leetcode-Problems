class Solution {
public:
    TreeNode* changeArraytoBST(int l,int r,vector<int>& nums)
    {
        if(l>r)
        {
            return nullptr;
        }
        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=changeArraytoBST(l,mid-1,nums);
        root->right=changeArraytoBST(mid+1,r,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return changeArraytoBST(0,nums.size()-1,nums);
    }
};
