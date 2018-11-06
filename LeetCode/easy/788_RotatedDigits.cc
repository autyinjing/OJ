class Solution {
public:
    int rotatedDigits(int N) {
        int ret = 0;
        for (int i = 1; i <= N; ++i) 
            if (isGoodNum(i)) ++ret;
        return ret;
    }

    bool isGoodNum(int num) {
        int v = 0, n = num, pow = 1;
        int help[10] = {0,1,5,-1,-1, 2,9,-1,8,6};
        while (n) {
            int tmp = help[n % 10];
            if (tmp < 0) return false;
            v = tmp * pow + v;
            n /= 10;
            pow *= 10;
        }
        return v != num;
    }
};
