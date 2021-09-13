// Runtime: 44 ms, faster than 43.41% of C++ online submissions for Find Duplicate Subtrees.
// Memory Usage: 66.2 MB, less than 15.24% of C++ online submissions for Find Duplicate Subtrees.


class Solution {
public:
    unordered_map<string,pair<int,TreeNode*>> m;
    string preorder(TreeNode *root){
        string str = "";
        if(root == nullptr) return "";
        str += to_string(root->val)+"->";
        str+=preorder(root->left)+"->";
        str+= preorder(root->right);
        m[str].first++;
        m[str].second = root;
        return str;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        preorder(root);
        int cnt=0;
        vector<TreeNode*> ans;
        for(auto it : m){
            if(it.second.first > 1) ans.push_back(it.second.second);
        } 
        return ans;
    }
};
