// Runtime: 12 ms, faster than 76.04% of C++ online submissions for Smallest String Starting From Leaf.
// Memory Usage: 20.2 MB, less than 27.81% of C++ online submissions for Smallest String Starting From Leaf.

class Solution {
public:
    set<string> s;
    void dfs(TreeNode* root , string str){
        if(!root){
            return;
        }
        str += (root->val)+'a';
        if(root->left==nullptr && root->right==nullptr){
            reverse(str.begin(),str.end());
            s.insert(str);
            return;
        }
        //cout<<root->val<<endl;
        //str += (root->val)+'a';
        cout<<str<<endl;
        dfs(root->left,str);
        dfs(root->right, str);
        return;
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string str = "";
        dfs(root,str);
        auto it = s.begin();
        return *it;
    }
};
