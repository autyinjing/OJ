class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size(), ret = size, idx = 0;
        for (auto v : nums) if (v == val) --ret;
        if (ret > 0 && ret < size)
            for (auto v : nums) if (v != val) nums[idx++] = v;
        return ret;
    }
};
