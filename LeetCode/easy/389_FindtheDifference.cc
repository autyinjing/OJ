class Solution {
public:
    char findTheDifference(string s, string t) {
        int help[26] = {0};
        for (auto c : t) ++help[c-'a'];
        for (auto c : s) --help[c-'a'];
        for (int i = 0; i < 26; ++i)
            if (help[i] > 0)
                return i + 'a';
        return 0;
    }
};
