class MinStack {
private:
    stack<int> st;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!minstack.empty()){
            val = min(val, minstack.top());
        }
        minstack.push(val);
    }
    
    void pop() {
        st.pop();
        minstack.pop();

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
