class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1, vec2;
        proOrder(vec1, root1);
        proOrder(vec2, root2);
        if (vec1.size() != vec2.size()) return false;
        int size = vec1.size();
        for (int i = 0; i < size; ++i)
            if (vec1[i] != vec2[i])
                return false;
        return true;
    }

    void proOrder(vector<int> &vec, TreeNode *node) {
        if (node == nullptr) return ;
        if (node->left == nullptr && node->right == nullptr)
            vec.push_back(node->val);
        proOrder(vec, node->left);
        proOrder(vec, node->right);
    }
};
