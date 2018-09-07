class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto val : nums)
            ret ^= val;
        return ret;
    }
};
