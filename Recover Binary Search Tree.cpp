// Runtime: 24 ms, faster than 98.66% of C++ online submissions for Recover Binary Search Tree.
// Memory Usage: 58.2 MB, less than 9.52% of C++ online submissions for Recover Binary Search Tree.

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
    TreeNode* curr=NULL;TreeNode* front=NULL;
    TreeNode* next=NULL;TreeNode* back=NULL;
    void recover_helper(TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }
       recover_helper(root->left);
       if(curr!=nullptr && root->val<curr->val) {
           if(front==NULL){
                front = curr;
                next= root;
           }
           else{
               back = root;
           }
       }
        curr = root;
        recover_helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        recover_helper(root);
        
        if(front!=nullptr && back!=nullptr)
        {
            swap((front->val),(back->val));
        }
        else if(front!=nullptr && next!=nullptr)
        {
            swap((front->val),(next->val));
        }   
    }
};
