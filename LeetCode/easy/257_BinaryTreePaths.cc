class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        preOrder(ret, root, "");
        return ret;
    }

    void preOrder(vector<string> &vec, TreeNode *node, const string &path) {
        if (node == nullptr) return;
        if (node->left == nullptr && node->right == nullptr)
            vec.emplace_back(path+to_string(node->val));
        auto help = path + to_string(node->val) + "->";
        preOrder(vec, node->left, help);
        preOrder(vec, node->right, help);
    }
};
