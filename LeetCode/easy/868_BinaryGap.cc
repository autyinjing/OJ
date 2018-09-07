class Solution {
public:
    int binaryGap(int N) {
        int res = 0;
        for (int d = -32; N; ++d, N >>= 1)
            if (N & 1) res = max(res, d), d = 0;
        return res;
    }
};

//1. 原始做法：先找到第一个1，然后开始统计间隔，只保存最大值
//2. 优化：把距离的初始值设为-32（int一共需要移位32次才能判断是不是有1），当找到第一个1时，距离重置为0，就可以正常计数了
