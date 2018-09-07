class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<pair<int, TreeNode*>> help;
        vector<vector<int>> ret;
        if (root != nullptr) help.push(make_pair(0, root));
        while (!help.empty()) {
            auto &r = help.front();
            help.pop();
            while (ret.size() <= r.first) ret.emplace_back(vector<int>());
            ret[r.first].push_back(r.second->val);
            if (r.second->left) help.push(make_pair(r.first+1, r.second->left));
            if (r.second->right) help.push(make_pair(r.first+1, r.second->right));
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
