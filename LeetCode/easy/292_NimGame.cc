class Solution {
public:
    bool canWinNim(int n) {
        //如果石头数量是4的整数倍，那么无论先手者拿几个，后手者都可以使剩下的数量为4的整数倍，导致出现最后剩4个的情况，那么先手者必输
        return n % 4;
    }
};
