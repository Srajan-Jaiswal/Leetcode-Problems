// Runtime: 24 ms, faster than 97.74% of C++ online submissions for Delete Node in a BST.
// Memory Usage: 32.7 MB, less than 75.63% of C++ online submissions for Delete Node in a BST.

class Solution {
public:
    
    TreeNode* find_last_right(TreeNode* root){
        if(root->right==nullptr) return root;
        return find_last_right(root->right);
    }
    
    TreeNode* give_tree(TreeNode* root){
        if(root->left == nullptr) return root->right;
        else if(root->right == nullptr) return root->left;
        TreeNode* right_child = root->right;
        TreeNode* last_right_of_left = find_last_right(root->left);
        last_right_of_left->right = right_child;
        return root->left ;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr){
            return nullptr;
        }
        if(root->val==key){ 
          return give_tree(root);
        }
        TreeNode* temp = root;
        while(root!=nullptr){
            if(root->val > key){
               if(root->left != nullptr && root->left->val == key){
                  root->left = give_tree(root->left);
                   break;
               }  
               else{
                   root = root->left;  //going  down in left side 
               } 
            }
            else{
                if(root->right != nullptr && root->right->val == key){
                    root->right = give_tree(root->right);
                    break;
                }
                else{
                    root = root->right; // going  down in  right side
                }
            }
        }
        return temp;
    }
};
