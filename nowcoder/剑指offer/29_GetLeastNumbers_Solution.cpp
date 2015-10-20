class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        //使用大根堆解决问题
        vector<int> ret;
        if (k > input.size())
            return ret;
        
        priority_queue<int, vector<int>, less<int>> help;
        for (auto it = input.begin(); it != input.end(); ++it) {
            help.push(*it);
            if (help.size() > k)
                help.pop();
        }
        
        while ( !help.empty() ) {
            ret.push_back(help.top());
            help.pop();
        }
        
        return ret;
    }
};
