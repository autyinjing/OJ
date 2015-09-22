/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        auto root = help(pre, in, 0, pre.size() - 1, 0, in.size());
        return root;
    }
    
    struct TreeNode *help(vector<int> pre, vector<int> in, size_t pre_beg,
                          size_t pre_end, size_t in_beg, size_t in_end) {
        if ((pre_beg > pre_end) || (in_beg > in_end))
            return NULL;
        
        size_t pos;
        //创建当前结点
        TreeNode *node = new TreeNode(pre[pre_beg]);
        //寻找当前结点在中序序列中的位置
        for (pos = in_beg; pos <= in_end; ++pos) {
            if (in[pos] == pre[pre_beg]) {
            	break;
            }
        }
        
        //创建左子树和右子树
        node->left = help(pre, in, pre_beg + 1, pre_beg + pos - in_beg, in_beg, pos - 1);
        node->right = help(pre, in, pre_beg + pos - in_beg + 1, pre_end, pos + 1, in_end);
        
        return node;
    }
};
