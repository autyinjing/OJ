class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int xXory = 0;
        int mask = 1;
        
        //得到 x^y 的结果
        for (auto it = data.begin(); it != data.end(); ++it) {
            xXory ^= *it;
        }
        //求掩码
        while ((xXory & mask) == 0)
            mask <<= 1;
        //得到x和y
        *num1 = *num2 = 0;
        for (auto it = data.begin(); it != data.end(); ++it) {
            if (*it & mask) {
                *num1 ^= *it;
            } else {
                *num2 ^= *it;
            }
        }
        
        if (data.size() < 2) {
            *num1 = *num2 = 0;
        }
    }
};
