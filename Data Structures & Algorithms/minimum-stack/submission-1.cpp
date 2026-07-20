class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        stack_.push(val);
        val = std::min(val, minStack_.empty() ? val : minStack_.top());
        minStack_.push(val);
    }
    
    void pop() {
        stack_.pop();
        minStack_.pop();
    }
    
    int top() {
        return stack_.top();
    }
    
    int getMin() {
        return minStack_.top();
    }

private:
    std::stack<int> stack_;
    std::stack<int> minStack_;
};
