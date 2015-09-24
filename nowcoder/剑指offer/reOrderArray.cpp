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
    }
};
