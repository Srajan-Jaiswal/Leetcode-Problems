
Runtime: 412 ms, faster than 5.29% of C++ online submissions for Binary Tree Level Order Traversal II.
Memory Usage: 64.5 MB, less than 5.14% of C++ online submissions for Binary Tree Level Order Traversal II.


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public: vector<int> ans,res ;   
public:
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
          return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
            return (max(l,r)+1);
    }
public: 
   vector<int> printIth(TreeNode* root,int idx)
    {
        if(root==NULL)
        {
          return ans;
        }
        if(idx==1)
        { 
          ans.push_back(root->val);
        }
        printIth(root->left,idx-1);
        printIth(root->right,idx-1); 
        return ans;
    }
public:
   vector<vector<int>> levelOrderBottom(TreeNode* root) 
   {
        vector<vector<int>> fin_vector;
        int h=height(root);
        for(int i=h;i>0;i--)
        {
             res = printIth(root,i);
            fin_vector.push_back(res);
            res.clear();
            ans.clear();
        }
        return fin_vector;                          
    }
};
