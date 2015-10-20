class Solution {
public:
    vector<string> Permutation(string str) {
        //使用STL的next_permutation()解决
        vector<string> ret_list;
        if (str == "")
            return ret_list;
        ret_list.push_back(str);
        while ( next_permutation(str.begin(), str.end()) ) {
            //获取下一个排列
            ret_list.push_back(str);
        }
        
        return ret_list;
    }
};
