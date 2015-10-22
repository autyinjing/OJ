/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        return depth(pRoot, 0);
    }
    
private:
    int depth(TreeNode* root, int layer) {
        if (root == NULL)
            return 0;
        return max(layer + 1, max(depth(root->left, layer + 1), depth(root->right, layer + 1)));
    }
};
