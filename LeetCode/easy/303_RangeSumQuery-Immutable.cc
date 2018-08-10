class NumArray {
public:
    NumArray(vector<int> nums) {
        int size = nums.size();
        for (int i = 1; i < size; ++i)
            nums[i] += nums[i-1];
        nums_ = nums;
    }

    int sumRange(int i, int j) {
        if (i == 0)
            return nums_[j];
        return nums_[j] - nums_[i-1];
    }

private:
    vector<int> nums_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
