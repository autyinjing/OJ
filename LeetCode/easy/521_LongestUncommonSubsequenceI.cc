class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a.size() != b.size())
            return max(a.size(), b.size());
        return (a == b) ? -1 : a.size();
    }
};

//注意题目：“最长特殊序列定义如下：该序列为某字符串独有的最长子序列（即不能是其他字符串的子序列）。”
//1. 不能是其他字符串的子序列，那么谁更长谁就是 最长特殊序列
//2. 如果一样长，只要不是完全相等，那么各自都是 最长特殊序列
