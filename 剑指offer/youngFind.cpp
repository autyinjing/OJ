bool Find(vector<vector<int> > array,int target) {
        //从左下开始查找，右上同理
        for (int i = array.size()-1, j = 0; (i >= 0) && (j < array[0].size()); ) {
            if (array[i][j] == target) {
                return true;
            } else if (array[i][j] > target) {
                --i; 	//往上
            } else if (array[i][j] < target) {
                ++j; 	//往右
            }
        }

        return false;
}
