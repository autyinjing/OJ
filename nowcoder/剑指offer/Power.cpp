class Solution {
public:
    double Power(double base, int exponent) {
        double ret = 1;

        //常规方法
        /*for (int i = 0; i < exponent; ++i) {
            ret *= base;
        }*/
        
        /*//递归解法，理论上可行，但占用太多栈内存，过不了
        if (exponent == 0)
            return 1;
        if (sign == false) {
            return 1 / Power(base, -exponent);
        } else {
            return base * Power(base, exponent - 1);
        }*/
        
        //快速解法
        int p = abs(exponent);
        while (p != 0) {
            if (p & 1)
                ret *= base;
            base *= base;
            p >>= 1;
        }
        
        return exponent < 0 ? 1 / ret : ret;
    }
};
