class MyQueue {
public:

    stack <int> st1, st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        /* Pop out elements from the first stack 
        and push on top of the second stack */
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        
        // Insert the desired element
        st1.push(x);
        
        /* Pop out elements from the second stack 
        and push back on top of the first stack */
        while (!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        // Edge case
        if (st1.empty()) {
            cout << "Stack is empty";
            return -1; // Representing empty stack
        }
        
        // Get the top element
        int topElement = st1.top();
        st1.pop(); // Perform the pop operation
        
        return topElement; // Return the popped value
    }
    
    int peek() {
        // Edge case
        if (st1.empty()) {
            cout << "Stack is empty";
            return -1; // Representing empty stack
        }
        
        // Return the top element
        return st1.top();
    }
    
    bool empty() {
         return st1.empty();
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