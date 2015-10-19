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
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        //实质上就是二叉树的层序遍历
        queue<TreeNode *> help;
        vector<int> ret;
        auto tmp = root;
        
        if (tmp != NULL)
            help.push(root);
        while ( !help.empty() ) {
            tmp = help.front();
            help.pop();
            ret.push_back(tmp->val);
            if (tmp->left != NULL)
                help.push(tmp->left);
            if (tmp->right != NULL)
                help.push(tmp->right);
        }
        return ret;
    }
};
