class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int start = 0, cnt = S.size();
        vector<int> ret(cnt, cnt);

        auto pos = S.find(C, start);
        while (pos != string::npos) {
            ret[pos] = 0;
            //置前面的
            for (int i = pos - 1; i >= 0; --i) {
                if (S[i] == C) break;
                int val = pos - i;
                if (val > ret[i]) break;
                ret[i] = val;
            }
            //置后面的
            for (int i = pos + 1; i < cnt; ++i)
                ret[i] = i - pos;
            start = pos + 1;
            pos = S.find(C, start);
        }
        return ret;
    }
};
