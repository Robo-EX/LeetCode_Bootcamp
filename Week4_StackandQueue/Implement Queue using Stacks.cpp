// https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            int y = s1.top();
            s2.push(y);
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            int y = s2.top();
            s1.push(y);
            s2.pop();
        }
        
    }
    
    int pop() {
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        int x = s1.top();
        return x;
    }
    
    bool empty() {
        if(s1.empty())
            return true;
        else 
            return false;
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
