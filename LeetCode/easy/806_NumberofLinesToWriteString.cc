class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> ret{0, 0};
        int line_len = 0, line_num = 0;
        for (auto c : S) {
            int char_len = widths[c-'a'];
            if (line_len + char_len > 100) {
                ++line_num;
                line_len = 0;
            }
            line_len += char_len;
        }
        if (line_len > 0)
            ++line_num;
        ret[0] = line_num;
        ret[1] = line_len;
        return ret;
    }
};
