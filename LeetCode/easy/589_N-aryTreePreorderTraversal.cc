/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ret;
        porder(ret, root);
        return ret;
    }

    void porder(vector<int> &vec, Node *node) {
        if (!node)
            return;
        vec.push_back(node->val);
        for (auto child : node->children)
            porder(vec, child);
    }
};
