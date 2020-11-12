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

                            |
                            |
                            |
                            |
                           \_/ 
                        OPTIMISATION
                        
//Runtime: 192 ms, faster than 85.61% of C++ online submissions for All Elements in Two Binary Search Trees.
//Memory Usage: 88.2 MB, less than 5.02% of C++ online submissions for All Elements in Two Binary Search Trees.                        
class Solution {
    void inorder(TreeNode* root, vector<int>& v) {
        if(!root){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2,v3;
        inorder(root1,v1),
        inorder(root2,v2);
        int i=0, j=0, 
        n1=v1.size(),
        n2=v2.size();
        while(i<n1 && j<n2)
            if(v1[i] < v2[j])
            {
                v3.push_back(v1[i++]);
            }
            else 
            {
                v3.push_back(v2[j++]);
            }
        while(i<n1) 
        {
           v3.push_back(v1[i++]);
        }
        while(j<n2)
        {
            v3.push_back(v2[j++]);
        }
        return v3;
    }
};
