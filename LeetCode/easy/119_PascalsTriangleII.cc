class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> help(2, vector<int>(rowIndex+1, 0));
        help[0][0] = help[1][0] = help[1][1] = 1;
        if (rowIndex <= 1) return help[rowIndex];
        int idx = 1;
        for (int i = 2; i <= rowIndex; ++i) {
            idx = 1 - idx;
            help[idx][0] = help[idx][i] = 1;
            for (int j = 1; j < i; ++j)
                help[idx][j] = help[1-idx][j-1] + help[1-idx][j];
        }
        return help[idx];
    }
};
