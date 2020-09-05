Runtime: 8 ms, faster than 42.66% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
Memory Usage: 12.2 MB, less than 74.93% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.


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
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		vector<vector<int>> bfs;
		vector<int> ans;
		stack<TreeNode*> stk1;
		stack<TreeNode*> stk2;
		TreeNode* r = root;
		if (r == NULL)
		{
			return bfs;
		}
		stk1.push(r);
		bool lr = true;
		while (!stk1.empty())
		{
			int s = stk1.size();
			while (s > 0)
			{
				TreeNode* fr = stk1.top();
				ans.push_back(fr->val);
				stk1.pop();
				if (lr)
				{
					if (fr->left)
						stk2.push(fr->left);
					if (fr->right)
						stk2.push(fr->right);
				}
				else {
					if (fr->right)
						stk2.push(fr->right);
					if (fr->left)
						stk2.push(fr->left);
				}
				s--;
				if (stk1.empty())
				{
					lr = !lr;
					swap(stk1, stk2);
				}
			}
			if (ans.size() != 0)
			{
				bfs.push_back(ans);
				ans.clear();
			}
		}
		return bfs;
	}
};
