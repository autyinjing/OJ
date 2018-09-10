class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        if (!(x % 10)) return false;

        int src = x, dst = 0;
        while (x) {
            dst = dst * 10 + x % 10;
            x /= 10;
        }
        return src == dst;
    }
};
