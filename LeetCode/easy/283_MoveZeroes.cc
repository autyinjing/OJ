class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tail = 0, pos = 0, size = nums.size();
        while (1) {
            while (tail < size && nums[tail] != 0) ++tail;
            if (pos <= tail) pos = tail + 1;
            while (pos < size && nums[pos] == 0) ++pos;
            if (pos >= size) break;
            nums[tail++] = nums[pos];
            nums[pos] = 0;
        }
    }
};
