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
    int maxDepth(Node* root) {
        if (root == nullptr)
            return 0;
        int max_depth = 0;
        for (auto &node : root->children) {
            int tmp_depth = maxDepth(node);
            if (tmp_depth > max_depth)
                max_depth = tmp_depth;
        }
        return max_depth + 1;
    }
};
