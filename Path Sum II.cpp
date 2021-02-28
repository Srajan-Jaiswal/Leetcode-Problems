// Runtime: 16 ms, faster than 50.90% of C++ online submissions for Path Sum II.
// Memory Usage: 39.1 MB, less than 14.84% of C++ online submissions for Path Sum II.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;https://assets.leetcode.com/uploads/2021/01/18/pathsumii1.jpg
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    void pathSumUtil(TreeNode* root,int tar,int sum,vector<int> res){
       if(root == nullptr) return; 
        sum += root->val; 
        res.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr && sum==tar){
            ans.push_back(res);
        }
        
        pathSumUtil(root->left,tar,sum,res);
        pathSumUtil(root->right,tar,sum,res);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
          vector<int> res;
          pathSumUtil(root,targetSum,0,res);
        return ans;
    }
};
