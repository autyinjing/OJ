class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        //将元素导入stack2
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
        
        //取出队首元素
        int ret = stack2.top();
        stack2.pop();
        
        //将元素导回stack1
        while (!stack2.empty()) {
            stack1.push(stack2.top());
            stack2.pop();
        }
        
        return ret;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
