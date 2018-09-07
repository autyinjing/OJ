class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<pair<TreeNode*, int>> help;
        vector<pair<double, double>> lv_info;
        vector<double> average;
        help.push(make_pair(root, 0));
        while (!help.empty()) {
            auto it = help.front();
            help.pop();
            while (lv_info.size() <= it.second) lv_info.push_back(make_pair(0, 0));
            lv_info[it.second].first += it.first->val;
            ++lv_info[it.second].second;
            if (it.first->left) help.push(make_pair(it.first->left, it.second+1));
            if (it.first->right) help.push(make_pair(it.first->right, it.second+1));
        }

        for (auto &it : lv_info)
            average.push_back(it.first / it.second);
        return average;
    }
};
