class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int h = grid.size(), l = grid[0].size(), ret = 0;
        for (int x = 0; x < h; ++x)
            for (int y = 0; y < l; ++y) {
                if (grid[x][y]) {
                    //把上边和左边相邻的边一起减掉，减少了一半的减法运算
                    ret += 4;
                    if (x >= 1 && grid[x-1][y]) ret -= 2;
                    if (y >= 1 && grid[x][y-1]) ret -= 2;
                }
            }
        return ret;
    }
};
