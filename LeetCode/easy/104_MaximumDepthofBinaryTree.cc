/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	int maxDepth(TreeNode* root) {
		//std::max()很慢？
		//return root ? (max(maxDepth(root->left), maxDepth(root->right)) + 1) : 0;
		if (!root)
			return 0;
		int left_depth = maxDepth(root->left);
		int right_depth = maxDepth(root->right);
		return (left_depth > right_depth ? left_depth : right_depth) + 1;
	}
};
