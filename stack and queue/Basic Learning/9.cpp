class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        int n = s.length();
        for(int i = 0; i<n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                s1.push(s[i]);
            }else{
                if(s1.empty()) return false;
                char ch = s1.top();
                s1.pop();
                if(s[i] == ')' && ch == '('){}
                else if(s[i] == '}' && ch == '{'){}
                else if(s[i] == ']' && ch == '['){}
                else return false;
            }
            
        }
        return s1.empty();
    }
};