class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> help1, help2;
        for (auto v : nums1) help1.insert(v);
        for (auto v : nums2) if (help1.count(v)) help2.insert(v);
        return vector<int>(help2.begin(), help2.end());
    }
};
