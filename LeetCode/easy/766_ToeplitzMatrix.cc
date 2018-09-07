class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int ln = matrix.size(), cn = matrix[0].size();
        for (int i = 1; i < ln; ++i) {
            for (int j = 1; j < cn; ++j) {
                if (matrix[i][j] != matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};
