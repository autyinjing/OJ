class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ret;
        int top, bottom, left, right;
        
        top = left = 0;
        bottom = matrix.size() - 1;
        right = matrix[0].size() - 1;
        
        while ((top <= bottom) && (left <= right)) {
            //打印上部分
            for (int i = left; i <= right; ++i)
                ret.push_back(matrix[top][i]);
            //打印右部分
            for (int i = top + 1; i <= bottom; ++i)
                ret.push_back(matrix[i][right]);
            //打印下部分
            if (top != bottom) {
                for (int i = right - 1; i >= left; --i)
                    ret.push_back(matrix[bottom][i]);
            }
            //打印左部分
            if (left != right) {
                for (int i = bottom - 1; i > top; --i)
                    ret.push_back(matrix[i][left]);
            }
            ++left;
            --right;
            ++top;
            --bottom;
        }
        
        return ret;
    }
};
