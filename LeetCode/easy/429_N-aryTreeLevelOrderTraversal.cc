class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<pair<int, Node*>> help;
        vector<vector<int>> ret;
        if (root != nullptr) help.push(make_pair(0, root));
        while (!help.empty()) {
            auto p = help.front();
            help.pop();
            while (ret.size() <= p.first) ret.emplace_back(vector<int>());
            ret[p.first].push_back(p.second->val);
            for (auto c : p.second->children)
                help.push(make_pair(p.first+1, c));
        }
        return ret;
    }
};
