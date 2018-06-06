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
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return createNode(nums, 0, nums.size() - 1);
	}

	TreeNode* createNode(vector<int>& nums, int left, int right) {
		if (left > right)
			return nullptr;
		int mid = (left + right) / 2;
		TreeNode* node = new TreeNode(nums[mid]);
		node->left  = createNode(nums, left, mid - 1);
		node->right = createNode(nums, mid + 1, right);
		return node;
	}
};
