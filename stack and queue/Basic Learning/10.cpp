class MinStack {
public:
    stack<long long> st;  // use long long to avoid overflow
    long long mini = LLONG_MAX;

    MinStack() {}

    void push(int val) {
        if(st.empty()){
            mini = val;
            st.push(val);
        } else {
            if(val >= mini) {
                st.push(val);
            } else {
                st.push(2LL * val - mini); // encode
                mini = val;
            }
        }
    }

    void pop() {
        long long ans = st.top();
        st.pop();
        if(ans < mini) {  // decode previous minimum
            mini = 2LL * mini - ans;
        }
    }

    int top() {
        long long ans = st.top();
        if(ans >= mini) return (int)ans;
        return (int)mini;  // encoded value means current minimum
    }

    int getMin() {
        return (int)mini;
    }
};
