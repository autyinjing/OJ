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
    vector<int> postorder(Node* root) {
        vector<int> ret;
        recursionOrder(root, ret);
        //iterationOrder(root, ret);
        return ret;
    }

    //迭代
    void iterationOrder(Node* p, vector<int>& vec) {
    }

    //递归
    void recursionOrder(Node* p, vector<int>& vec) {
        if (p) {
            for (auto &node : p->children)
                recursionOrder(node, vec);
            vec.push_back(p->val);
        }
    }
};
