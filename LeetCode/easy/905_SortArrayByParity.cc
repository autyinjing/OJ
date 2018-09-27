class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l = 0, r = A.size() - 1;
        vector<int> ret(r+1, 0);
        for (auto v : A) {
            if (v & 1) ret[r--] = v;
            else ret[l++] = v;
            if (l > r) break;
        }
        return ret;                                
    }         
};
