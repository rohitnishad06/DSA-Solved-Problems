class Solution {
public:
    string removeKdigits(string arr, int k) {
        stack<char>st;
        int n = arr.length();
        for(int i = 0; i<n; i++){
            while(!st.empty() && k>0 && (st.top() - '0') > (arr[i] - '0')){
                st.pop();
                k--;
            }
            st.push(arr[i]);
        }
        while( k > 0 ){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        while(res.size() != 0 && res.back() == '0'){
            res.pop_back();
        }
        reverse(res.begin(), res.end());
        if(res.empty()) return "0";
        return res;


    }
};