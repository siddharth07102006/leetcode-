class MinStack {
    stack <int> minstack,mainstack;
public:
    void push(int value) {
        if(mainstack.empty()){
            mainstack.push(value);
            minstack.push(value);
        }
        else if(!mainstack.empty()){
            if(minstack.top()>=value) minstack.push(value);
            else if(minstack.top()<value) minstack.push(minstack.top());
            mainstack.push(value);
        }
    }
    
    void pop() {
        if(!mainstack.empty() && !minstack.empty())
        mainstack.pop();
        minstack.pop();
    }
    
    int top() {
        return mainstack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */