class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int depth = 0;
        return IsBalanced(pRoot, depth);
    }
   
private:
    //判断某子树是否平衡二叉树，并更新树高
    bool IsBalanced(TreeNode* node, int &depth) {
        if (node == NULL)
            return true;
        int left = 0, right = 0;
        if (IsBalanced(node->left, left) && IsBalanced(node->right, right)) {
            int diff = left - right;
            if (abs(diff) > 1)
                return false;
            depth = (left > right ? left : right) + 1;
            return true;
        }
        return false;
    }
};
