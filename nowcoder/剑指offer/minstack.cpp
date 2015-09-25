class Solution {
public:
    void push(int value) {
        sta.push(value);
        if (help.empty() || (value < help.top()))
            help.push(value);
        else
            help.push(help.top());
    }
    void pop() {
        sta.pop();
        help.pop();
    }
    int top() {
        return sta.top();
    }
    int min() {
        return help.top();
    }
    
private:
    stack<int> sta;
    stack<int> help;
};
