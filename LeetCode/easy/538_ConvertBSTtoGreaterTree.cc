class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        proOrder(root, sum);
        return root;
    }

    void proOrder(TreeNode *p, int &sum) {
        if (!p) return ;
        proOrder(p->right, sum);
        p->val += sum;
        sum = p->val;
        proOrder(p->left, sum);
    }
};
