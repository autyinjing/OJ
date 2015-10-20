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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> path;
        vector<int> help;
        if (root == NULL)
            return path;
        GetPath(root, expectNumber, help, path);
        return path;
    }
    
private:
    void GetPath(TreeNode* node, int target, vector<int> &help, vector<vector<int> > &path) {
        if (node == NULL)
            return;
        //将当前结点加入路径中
        help.push_back(node->val);
        bool isLeaf = node->left == NULL && node->right == NULL;
        if (isLeaf && (node->val == target)) {
            //到达叶结点并且路径和满足条件，说明该路径是要找的路径
            path.push_back(help);
            help.pop_back();
        } else {
            //否则继续向下
            GetPath(node->left, target - node->val, help, path);
            GetPath(node->right, target - node->val, help, path);
            help.pop_back();
        }
    }
};
