// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Coloring Game.
//Memory Usage: 10.6 MB, less than 81.41% of C++ online submissions for Binary Tree Coloring Game.

class Solution {
public:
     TreeNode* find(TreeNode* root, int x){
        if (!root) return NULL;
        if (root->val == x) return root;
        TreeNode* l = find(root->left, x);
        TreeNode* r = find(root->right, x);
        if(l) return l;
        else return  r; 
    }
    int get_height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left_height = get_height(root->left);
        int right_height = get_height(root->right);
         return max(left_height+right_height+1,max(left_height,right_height));
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l = get_height(find(root, x)->left);
        int r = get_height(find(root, x)->right);
        int p;
        if(find(root, x) != root){
           p=(n-(l+r+1));
        }
        else p=0;
        int bb = max(l,max(r, p));
        int rb= n - bb;
        return bb > rb;
    }
};
