class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        return count(data.begin(), data.end(), k);
    }
};
