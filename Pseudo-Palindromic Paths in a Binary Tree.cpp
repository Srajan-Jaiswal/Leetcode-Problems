// Runtime: 308 ms, faster than 53.84% of C++ online submissions for Pseudo-Palindromic Paths in a Binary Tree.
// Memory Usage: 192.1 MB, less than 28.94% of C++ online submissions for Pseudo-Palindromic Paths in a Binary Tree.


class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    unordered_map<int,int> um; 
    int ans=0;
    int paths(TreeNode* root){
        if(root==nullptr){
            return ans;
        }
        um[root->val]++;
        if(root->right==nullptr && root->left==nullptr){
            int temp=0;
            for(auto it:um){
                if(it.second%2==1) temp++;
            }
            if(temp<=1) ans++;  
        }
        paths(root->left);
        paths(root->right);
        um[root->val]--;
        return ans;
    }
    int pseudoPalindromicPaths (TreeNode* root){
        return paths(root);   
    }
};
