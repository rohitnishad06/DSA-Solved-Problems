class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int>st;
        int maxArea = 0;
        for(int i = 0; i<n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                int Area = arr[element] * (nse - pse -1);
                maxArea = max(maxArea, Area);
            }
            st.push(i);
        }

        while(!st.empty()){
            int nse = n;
            int element = st.top();
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            int Area = arr[element] * (nse - pse -1);
            maxArea = max(maxArea, Area);
        }
        return maxArea;
    }
};