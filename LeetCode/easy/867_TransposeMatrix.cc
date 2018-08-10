class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int col_cnt = A[0].size(), line_cnt = A.size();
        vector<vector<int>> new_vec(col_cnt);
        for (int i = 0; i < col_cnt; ++i) {
            vector<int> new_line(line_cnt);
            for (int j = 0; j < line_cnt; ++j)
                new_line[j] = A[j][i];
            new_vec[i] = new_line;
        }
        return new_vec;
    }
};
