class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> ret;
        if (array.size() < 2)
            return ret;
        //Two points
        int left = 0, right = array.size() - 1;
        while (left < right) {
            int tmp_sum = array[left] + array[right];
            if (tmp_sum == sum) {
                ret.push_back(array[left]);
                ret.push_back(array[right]);
                return ret;
            } else if (tmp_sum > sum) {
                --right;
            } else {
                ++left;
            }
        }
        return ret;
    }
};
