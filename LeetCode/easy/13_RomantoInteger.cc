class Solution {
public:
    int romanToInt(string s) {
        int h_map['X'+1] = {0};
        h_map['I'] = 1;
        h_map['V'] = 5;
        h_map['X'] = 10;
        h_map['L'] = 50;
        h_map['C'] = 100;
        h_map['D'] = 500;
        h_map['M'] = 1000;
        int sum = 0, size = s.size() - 1;
        for (int i = 0; i < size; ++i) {
            int val = h_map[s[i]];
            if (val < h_map[s[i+1]]) sum -= val;
            else sum += val;
        }
        sum += h_map[s[size]];
        return sum;
    }
};
