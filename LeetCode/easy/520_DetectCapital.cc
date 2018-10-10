class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) return true;
        if (word[0] >= 'a') { 
            for (auto c : word) 
                if (isupper(c)) return false;
        } else {
            if (word[1] >= 'a') { 
                for (int i = 2; i < word.size(); ++i)
                    if (isupper(word[i])) return false;
            } else { 
                for (int i = 2; i < word.size(); ++i)
                    if (islower(word[i])) return false;
            }
        }
        return true;
    }
};
