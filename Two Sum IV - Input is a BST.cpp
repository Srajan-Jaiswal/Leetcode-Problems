// Runtime: 56 ms, faster than 65.88% of C++ online submissions for Two Sum IV - Input is a BST.
// Memory Usage: 37.2 MB, less than 65.92% of C++ online submissions for Two Sum IV - Input is a BST.

/**
 * Definition for a binary tree node.
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
    vector<int> v;
    void inorder(TreeNode* root)
    {
       if(root == nullptr)
       {
           return;
       }
       inorder(root->left);
        v.push_back(root->val);
       inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root); 
        int n = v.size();
        int ptr1 = 0;
        int ptr2 = n-1;
        bool flag = 1,ans;
        while(ptr2>ptr1)
       {
           if(v[ptr1] + v[ptr2] < k){
               ptr1++;
           }
           else if(v[ptr1] + v[ptr2] > k)
           {
               ptr2--;
           }
           else if(v[ptr1] + v[ptr2] == k)
           {   
               flag=0;
               ans = 1;
               break;
           }
       }
       if(flag){
           ans = 0;
       } 
        return ans;
    }
};
