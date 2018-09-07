class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ret;
        map<int, int> help;
        for (int i = 0; i < nums.size(); ++i) 
            help[nums[i]] = i;
        for (auto val : findNums) {
            int greater = -1;
            for (int i = help[val]+1; i < nums.size(); ++i) {
                if (nums[i] > val) {
                    greater = nums[i];
                    break;
                }
            }
            ret.push_back(greater);
        }
        return ret;
    }
};
