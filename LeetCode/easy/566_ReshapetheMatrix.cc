class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row_num = nums.size(), col_num = nums[0].size();
        if (r * c != row_num * col_num)
            return nums;

        vector<vector<int>> ret(r, vector<int>(c));
        int r_idx = 0, c_idx = 0, t_idx = 0;
        for (int i = 0; i < row_num; ++i) {
            for (int j = 0; j < col_num; ++j) {
                ret[r_idx][c_idx++] = nums[i][j];
                if (c_idx >= c) {
                    ++r_idx;
                    c_idx = 0;
                }
            }
        }
        return ret;
    }
};
