class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        m_stack[0].push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (m_stack[1].empty()) aTob();
        int ret = m_stack[1].top();
        m_stack[1].pop();
        return ret;
    }

    /** Get the front element. */
    int peek() {
        if (m_stack[1].empty()) aTob();
        return m_stack[1].top();                                               
    }  

    /** Returns whether the queue is empty. */
    bool empty() {
        return m_stack[0].empty() && m_stack[1].empty();
    }

    void aTob() {
        while (!m_stack[0].empty()) {
            m_stack[1].push(m_stack[0].top());
            m_stack[0].pop();
        }
    }

private:
    stack<int> m_stack[2];
};
