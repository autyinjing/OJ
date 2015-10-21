class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if (str.size() == 0)
            return -1;
        
        array<int, 'z'> count;
        fill(count.begin(), count.end(), 0);
        //统计每个字符出现的次数
        for (auto it = str.begin(); it != str.end(); ++it) {
            ++count[*it];
        }
        //寻找第一个出现次数为1的字符
        for (int i = 0; i < str.size(); ++i) {
            if (count[str[i]] == 1)
                return i;
        }
        return -1;
    }
};
