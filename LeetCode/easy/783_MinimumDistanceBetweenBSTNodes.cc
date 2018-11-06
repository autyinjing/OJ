class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> help;
        inOrder(root, help);
        int cnt = help.size(), diff = help[1] - help[0];
        for (int i = 2; i < cnt; ++i)
            diff = min(diff, help[i] - help[i-1]);
        return diff;
    }

    void inOrder(TreeNode *p, vector<int> &help) {
        if (!p) return ;
        inOrder(p->left, help);
        help.push_back(p->val);
        inOrder(p->right, help);
    }
};
