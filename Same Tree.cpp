// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
// Memory Usage: 9.9 MB, less than 83.25% of C++ online submissions for Same Tree.
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
      if(p == nullptr && q == nullptr){
             return true;
      }        
      else if(p == nullptr || q == nullptr){
          return false;
      }
      else if(p->val ==q->val){
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
            }
        else {
            return false;
        }
    }
};
