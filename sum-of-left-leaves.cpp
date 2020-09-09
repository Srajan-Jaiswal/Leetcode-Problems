Runtime: 8 ms, faster than 41.20% of C++ online submissions for Sum of Left Leaves.
Memory Usage: 13.5 MB, less than 63.14% of C++ online submissions for Sum of Left Leaves.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
	int sumOfLeftLeaves(TreeNode* root) {
		int res = 0;
		if (root == NULL)
        {
            return 0;
        }
		if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
        {
            res += (root->left->val);
        }
		res += sumOfLeftLeaves(root->left);
		res += sumOfLeftLeaves(root->right);
		return res;
	}
};
