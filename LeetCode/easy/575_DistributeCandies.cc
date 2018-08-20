class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        std::bitset<200001> cnt_set;
        for (auto val : candies)
            cnt_set.set(val+100000);
        if (cnt_set.count() >= candies.size()/2)
            return candies.size()/2;
        return cnt_set.count();
    }
};
