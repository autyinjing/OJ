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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        //通过非递归中序遍历二叉树实现
        stack<TreeNode *> help;
        TreeNode *root = NULL, *pre = NULL, *tmp = NULL;
        bool isFirst = true;
        
        tmp = pRootOfTree;
        while (tmp != NULL || !help.empty()) {
            while (tmp != NULL) {
                help.push(tmp);
                tmp = tmp->left;
            }
            tmp = help.top();
            help.pop();
            if ( isFirst ) {
                root = tmp;
                pre = tmp;
                isFirst = false;
            } else {
                pre->right = tmp;
                tmp->left = pre;
                pre = tmp;
            }
            tmp = tmp->right;
        }
        
        return root;
    }
};
