class Solution {
public:
    int InversePairs(vector<int> data) {
        if (data.size() < 2)
            return 0;
        
        int count = 0;
        /*//冒泡排序交换一次消除一个逆序对，所以的交换次数就是逆序对的个数
        for (int i = data.size(); i > 0; --i) {
            for (int j = 0; j < i - 1; ++j) {
                if (data[j] > data[j+1]) {
                    swap(data[j], data[j+1]);
                    ++count;
                }
            }
        }*/
        //直接暴力求解
        for (int i = 0; i < data.size(); ++i) {
            for (int j = i + 1; j < data.size(); ++j) {
                if (data[i] > data[j])
                    ++count;
            }
        }
        return count;
    }
};
