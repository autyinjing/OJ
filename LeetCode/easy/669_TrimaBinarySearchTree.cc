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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        //二叉搜索树：中序遍历为一个有序序列，并且无重复元素
        //1. 如果当前节点值过小，则说明当前节点及其左子树都需要减掉，直接返回右子树调整后的树
        //2. 如果当前节点值过大，则说明当前节点及其右子树都需要减掉，直接返回左子树调整后的树
        //3. 如果当前节点值满足条件，则需要分别调整左右子树，然后返回当前节点
        if (!root) return nullptr;
        if (root->val < L) return trimBST(root->right, L, R);
        if (root->val > R) return trimBST(root->left, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }   
};
