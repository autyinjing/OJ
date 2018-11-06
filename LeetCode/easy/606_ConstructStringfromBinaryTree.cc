class Solution {
public:
    string tree2str(TreeNode* t) {
        return getNodeStr(t, true);
    }

    string getNodeStr(TreeNode *t, bool is_first) {
        if (!t) { if (is_first) return ""; else return "()"; }
        string ret  = to_string(t->val);
        if (t->left || t->right) ret += getNodeStr(t->left, false);
        if (t->right) ret += getNodeStr(t->right, false);
        return is_first ? ret : ("(" + ret + ")");
    }
};
