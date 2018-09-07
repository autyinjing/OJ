class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int lines = grid.size(), cols = grid[0].size(), total_num = 0;
        for (int i = 0; i < lines; ++i) {
            int line_max = 0, col_max = 0;
            for (int j = 0; j < cols; ++j) {
                total_num += grid[i][j] ? 1 : 0;
                line_max = max(line_max, grid[i][j]);
                col_max = max(col_max, grid[j][i]);
            }
            total_num += line_max + col_max;
        }
        return total_num;
    }
};
