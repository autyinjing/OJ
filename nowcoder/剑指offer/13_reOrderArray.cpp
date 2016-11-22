class Solution {
public:
    void reOrderArray(vector<int> &array) {
        //解法1：使用辅助空间
        vector<int> help;
        
        for (auto it = array.begin(); it != array.end(); ++it) {
            if (*it & 1) 	//用辅助空间存储奇数
                help.push_back(*it);
        }
        //将所有偶数放到后边
        for (int pa = array.size()-1, ph = pa; pa >= 0; --pa) {
            if ((array[pa] & 1) == 0)
                array[ph--] = array[pa];
        }
        //将所有奇数放到前面
        for (int ph = 0, pa = 0; ph < help.size(); ++ph) {
            array[pa++] = help[ph];
        }

	//解法2：移位
        //int help = 0, i = 0, j = 0;
        //while (i < array.size()) 
        //{
        //    while (i < array.size() && (array[i] & 1)) ++i;
        //    j = i + 1;
        //    while (j < array.size() && !(array[j] & 1)) ++j;
        //    if (j >= array.size())
        //        break;
        //    help = array[j];
        //    while (j > i) {
        //        array[j] = array[j-1];
        //        --j;
        //    }
        //    array[i++] = help;
        //}
    }
};
