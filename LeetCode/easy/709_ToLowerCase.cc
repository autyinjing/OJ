class Solution {
public:
    string toLowerCase(string str) {
        string new_str = str;
        for (auto &c : new_str) c = tolower(c);
        return new_str;
    }
};
