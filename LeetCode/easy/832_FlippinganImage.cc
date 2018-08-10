class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> ret = A;
        int row_len = ret[0].size();

        if (row_len % 2) {
            int mid = row_len / 2;
            for (int i = 0; i < A.size(); ++i) {
                for (int l = 0; l < mid; ++l) {
                    int r = row_len - 1 - l;
                    if (ret[i][l] == ret[i][r])
                        ret[i][l] = ret[i][r] = 1 - ret[i][l];
                }
                ret[i][mid] = 1 - ret[i][mid];
            }
        } else {
            int mid = row_len / 2 - 1;
            for (int i = 0; i < A.size(); ++i) {
                for (int l = 0; l <= mid; ++l) {
                    int r = row_len - 1 - l;
                    if (ret[i][l] == ret[i][r])
                        ret[i][l] = ret[i][r] = 1 - ret[i][l];
                }
            }
        }
        return ret;
    }
};
