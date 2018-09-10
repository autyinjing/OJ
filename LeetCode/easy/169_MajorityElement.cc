class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1, dst = nums[0], size = nums.size();
        for (int i = 1; i < size; ++i) {
            if (nums[i] != dst) {
                if (cnt == 0) dst = nums[i], cnt = 1;
                else --cnt;
            } else {
                ++cnt;
            }
        }
        return dst;
    }
};
