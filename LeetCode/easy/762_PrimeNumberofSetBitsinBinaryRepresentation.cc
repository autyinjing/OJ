class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int cnt = 0;
        while (L <= R)
            cnt += (665772 >> bitset<32>(L++).count()) & 1;
        return cnt;
    }
};

//1. 665772(10) = 1010 0010 1000 1010 1100(2) ==> 665772的二进制位中，为1的位下标都是质数
