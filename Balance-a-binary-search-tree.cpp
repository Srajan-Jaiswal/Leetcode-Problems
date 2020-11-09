//Runtime: 184 ms, faster than 51.90% of C++ online submissions for Balance a Binary Search Tree.
//Memory Usage: 65.1 MB, less than 5.79% of C++ online submissions for Balance a Binary Search Tree.

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
    vector<int> vec;
void traverse(TreeNode *root)
{
    if(!root){
        return ;
    }
    traverse(root->left);
    vec.push_back(root->val);
    traverse(root->right);  
}
TreeNode* newtree(int s,int e)
{
    if(s>e)
    {
        return nullptr;
    }
    int mid = s+(e-s)/2;
    TreeNode* root  = new TreeNode(vec[mid]);
    root->left = newtree(s,mid-1);
    root->right = newtree(mid+1,e);
    return root;
}
TreeNode* balanceBST(TreeNode* root) {
        traverse(root);
       return  newtree(0, vec.size()-1);
    }
};
