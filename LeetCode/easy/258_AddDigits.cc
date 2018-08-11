class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;

        /*//暴力解法
        int ret = num;
        do {
            int tmp = 0;
            while (ret > 0) {
                tmp += ret % 10;
                ret /= 10;
            }
            ret = tmp;
        } while (ret >= 10);
        return ret;*/
    }
};

/*
 * https://en.wikipedia.org/wiki/Digital_root#Congruence_formula
 */
