class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 0, help = 0;
        for (auto v : nums)
            ret = max(ret, help=(!v ? 0 : help+1));
        return ret;
    }
};
