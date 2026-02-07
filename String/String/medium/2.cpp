class Solution {
public:
    int maxDepth(string s) {
        int openBracket = 0;
        int ans = 0;
        for(char ch : s){
            if(ch == '('){
                openBracket++;
            }else if(ch == ')'){
                openBracket--;
            }
            ans = max(ans, openBracket);
        }
        return ans;
    }
};