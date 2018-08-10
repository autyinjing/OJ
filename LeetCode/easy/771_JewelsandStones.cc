class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool is_gem['z'+1] = {false};
        int num = 0;

        //统计宝石种类
        for (int i = 0; i < J.size(); ++i)
            is_gem[J[i]] = true;
        //统计拥有宝石的数量
        for (int i = 0; i < S.size(); ++i)
            num += static_cast<int>(is_gem[S[i]]);
        return num;
    }
};
