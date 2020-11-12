//Runtime: 264 ms, faster than 34.43% of C++ online submissions for All Elements in Two Binary Search Trees.
//Memory Usage: 87 MB, less than 5.02% of C++ online submissions for All Elements in Two Binary Search Trees.

class Solution {
public:
    
   void preorder(TreeNode* root, vector<int> &v)
    {
       if(root == nullptr)
       {
           return ;
       }
       v.push_back(root->val);
       preorder(root->left,v);
       preorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
              vector<int> v1,v2;
              preorder(root1,v1);
              preorder(root2,v2);
             for(int i=0; i<v2.size();i++)
             {
                 v1.push_back(v2[i]);
             }
             sort(v1.begin(),v1.end());
        return v1;
    }
};
