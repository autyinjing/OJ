class Solution {
public:
    int titleToNumber(string s) {
        //乘法换成 左移 + 加法，好像快了不少
        int sum = 0;
        for (auto c : s)
            sum = (sum << 4) + (sum << 3) + (sum << 1) + (c - 'A' + 1);
        return sum;
    }
};
