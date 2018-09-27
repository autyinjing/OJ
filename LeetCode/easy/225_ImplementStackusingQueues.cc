class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        idx_ = 0;
    }

    /** Push element x onto stack. */
    void push(int x) {
        q_[idx_].push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        update();
        int ret = q_[idx_].front();
        q_[idx_].pop();
        idx_ = 1 - idx_;
        return ret;
    }

    /** Get the top element. */
    int top() {
        int ret = pop();
        q_[idx_].push(ret);                                                 
        return ret;  
    }                

    /** Returns whether the stack is empty. */
    bool empty() {   
        return q_[0].empty() && q_[1].empty();
    }

    void update() {
        int i = idx_, j = 1 - idx_;
        while (q_[i].size() > 1) {
            q_[j].push(q_[i].front());
            q_[i].pop();
        }
    }

private:
    queue<int> q_[2];
    int idx_;
};
