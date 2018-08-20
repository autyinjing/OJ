class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows; ++i) {
            auto tmp = vector<int>(i+1);
            tmp[0] = tmp[i] = 1;
            ret[i] = tmp;
        }
        for (int i = 2; i < numRows; ++i) {
            for (int j = 1; j < i; ++j)
                ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
        }
        return ret;
    }
};
