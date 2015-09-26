class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if (pushV.size() == 0)
            return false;
        //直接模拟入栈、出栈过程
        stack<int> help;
        
        for (auto push_it = pushV.begin(), pop_it = popV.begin();
             push_it != pushV.end(); ++push_it) {
            help.push(*push_it);
            while ((pop_it != popV.end()) && (help.top() == *pop_it)) {
                help.pop();
                ++pop_it;
            }
        }
        
        return help.empty();
    }
};
