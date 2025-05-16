class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(std::min(val, minStack.top()));
        }
    }
    
    void pop() {
        if (!stack.empty()) {
            stack.pop();
            minStack.pop();
        }
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// The above code defines a MinStack class that implements a stack with an additional feature to retrieve the minimum element in constant time. It uses two stacks: one for storing the actual stack elements and another for keeping track of the minimum elements. The push method adds an element to the stack and updates the minimum stack accordingly, while the pop method removes the top element from both stacks. The top method returns the top element of the main stack, and getMin returns the top element of the minimum stack.