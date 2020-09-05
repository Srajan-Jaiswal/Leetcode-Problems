Runtime: 4 ms, faster than 84.37% of C++ online submissions for Sum Root to Leaf Numbers.
Memory Usage: 12.4 MB, less than 80.83% of C++ online submissions for Sum Root to Leaf Numbers.



  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public: 
    int sumNumbershelper(TreeNode* root,int ans)
    {
        if(root==nullptr)
        {
            return 0;
        }
        ans = (ans*10+root->val); 
        if(root->left==nullptr && root->right==nullptr)
        {
            return  ans;
        }
        return sumNumbershelper(root->left,ans)+ sumNumbershelper(root->right,ans);
    }
public:
    int sumNumbers(TreeNode* root) {
     int ans;
     return  sumNumbershelper(root,0);   
    }
};
