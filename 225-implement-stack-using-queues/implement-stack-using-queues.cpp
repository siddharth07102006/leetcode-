class MyStack {
    queue<int> q1 , q2;
public:
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int topval=q1.front();
        q1.pop();
        swap(q1,q2);
        return topval;
    }
    
    int top() {
         int val=pop();
         push(val);
         return val;
    }
    
    bool empty() {
        if(q1.empty()&& q2.empty()) return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */