// Runtime: 84 ms, faster than 72.79% of C++ online submissions for Maximum Binary Tree.
// Memory Usage: 42.2 MB, less than 62.19% of C++ online submissions for Maximum Binary Tree.

class Solution {
public:
    TreeNode* formTree(vector<int> &nums,int l,int r){
        if(l>r)  return  nullptr;
      int idx = l;
      int data = nums[l];
      for(int i = l + 1; i <= r; i++){
         if(data < nums[i]){
            data = nums[i];
            idx = i;
         }
      }
        TreeNode* root = new TreeNode(nums[idx]);
        root->left = formTree(nums,l,idx-1);
        root->right = formTree(nums,idx+1,r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return formTree(nums,0,nums.size()-1);
    }
};
