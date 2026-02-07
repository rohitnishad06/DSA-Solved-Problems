class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";
        for(char ch : s){
            if(ch == '('){
                if(count > 0){
                    result += ch;
                }
                count++;
            }else{  // ch == ')'
                count--;
                if(count > 0){
                    result += ch;
                }
            }
        }
        return result;
    }
};