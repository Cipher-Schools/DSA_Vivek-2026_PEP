// https://leetcode.com/problems/implement-stack-using-queues/description/

class MyStack {
public:
    queue<int> primary;
    queue<int> secondary;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!primary.empty()){
            secondary.push(primary.front());
            primary.pop();
        }
        primary.push(x);
        while(!secondary.empty()){
            primary.push(secondary.front());
            secondary.pop();
        }
    }
    
    int pop() {
        int value = primary.front();
        primary.pop();
        return value;
    }
    
    int top() {
        return primary.front();
    }
    
    bool empty() {
        return primary.empty();        
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