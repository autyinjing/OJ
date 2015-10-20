class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.size() == 0)
            return 0;
        
        int count = 0;
        int x;
        for (auto it = numbers.begin(); it != numbers.end(); ++it) {
            if (count == 0) {
                x = *it;
                count = 1;
            } else if (x == *it) {
                ++count;
            } else {
                --count;
            }
        }
        
        //验证该数是否出现次数超过序列长度的一半
        count = 0;
        for (auto it = numbers.begin(); it != numbers.end(); ++it) {
            if (*it == x)
                ++count;
        }
        
        if (count * 2 > numbers.size())
            return x;
        return 0;
    }
};
