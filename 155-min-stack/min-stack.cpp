// First Solving
// class MinStack {
// public:
//     stack<pair<int,int>> st;
//     MinStack() {
        
//     }
    
//     void push(int value) {
//         if(st.empty()){
//             st.push({value,value});
//         }
//         else{
//             st.push({value,min(value,st.top().second)});
//         }
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Re-Solving
class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);

        if(minSt.empty() || value <= minSt.top()){
            minSt.push(value);
        }
    }
    
    void pop() {
        if(st.top() == minSt.top()){
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
