class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if (array.size() == 0)
            return 0;
        
        int max_sum, tmp_max;
        max_sum = tmp_max = array[0];
        for (int i = 1; i < array.size(); ++i) {
            tmp_max += array[i];
            
            if (tmp_max > max_sum)
                max_sum = tmp_max;
            if (tmp_max < 0)
                tmp_max = 0;
        }
        
        return max_sum;
    }
};
