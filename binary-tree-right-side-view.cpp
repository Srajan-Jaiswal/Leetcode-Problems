Runtime: 8 ms, faster than 35.80% of C++ online submissions for Binary Tree Right Side View.
Memory Usage: 14.2 MB, less than 5.02% of C++ online submissions for Binary Tree Right Side View


/**
 * struct TreeNode {
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
    vector<int> rightView(TreeNode* root,vector<int> &ans,int h,int *maxh)
    {
        if(root==NULL)
        {
           return ans;
        }
        if(h>*maxh)
        {
          ans.push_back(root->val);
          *maxh=h;
        }        
        rightView(root->right,ans,h+1,maxh);
        rightView(root->left,ans,h+1,maxh);
        return ans;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int maxh=INT_MIN;
        return rightView(root,ans,1,&maxh);
    }
};
