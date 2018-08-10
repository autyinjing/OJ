class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string flag[26] = {
            ".-","-...","-.-.","-..",".",    "..-.","--.","....","..",".---",
            "-.-",".-..","--","-.","---",   ".--.","--.-",".-.","...","-",
            "..-","...-",".--","-..-","-.--", "--.."
        };
        unordered_set<string> ret;  //哈希表更快 ？
        for (auto const &tmp : words) {
            string help;
            for (auto c : tmp)
                help += flag[c-'a'];
            ret.insert(help);
        }
        return ret.size();
    }
};
