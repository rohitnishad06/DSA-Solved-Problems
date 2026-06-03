class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
        unordered_map<int, int> m;
        stack<int> st;
        for(int i = num2.size() - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= num2[i] ){
                st.pop();
            }
            if(st.empty()) m[num2[i]] = -1;
            else{
                m[num2[i]] = st.top();
            }
            st.push(num2[i]);
        }

        vector<int>ans;
        for(int i = 0; i<num1.size(); i++){
            ans.push_back(m[num1[i]]);
        }
        return ans;
    }
};