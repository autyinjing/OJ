class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if (data.size() == 0)
            return 0;
        
        return count(data.begin(), data.end(), k);
    }
};
