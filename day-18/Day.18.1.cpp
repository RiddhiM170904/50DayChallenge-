class MyQueue {
private:
    std::stack<int> stack1; 
    std::stack<int> stack2; 
    void transferStack1ToStack2() {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
}
public:
    MyQueue() {
        
    }
    void push(int x) {
        stack1.push(x);
    }
    int pop() {
        if (stack2.empty()) {
            transferStack1ToStack2();
        }
        int front = stack2.top();
        stack2.pop();
        return front;
    }
    int peek() {
        if (stack2.empty()) {
            transferStack1ToStack2();
        }
        return stack2.top();
    }
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

// The above code defines a MyQueue class that implements a queue using two stacks. The class has methods to push an element onto the queue, pop an element from the front of the queue, peek at the front element without removing it, and check if the queue is empty. The transferStack1ToStack2 method is used to move elements from stack1 to stack2 when needed, ensuring that the elements are in the correct order for queue operations. The pop and peek methods utilize this transfer method to maintain the queue's FIFO behavior.