class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long ans = 0;
        int n = s.size();

        // ignore spaces
        while(i < n && s[i] == ' '){
            i++;
        }

        // sign checking
        if(i < n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }

        // read digit 
        while(i < n && isdigit(s[i]) ){
            ans = ans * 10 + (s[i] - '0');
            
            // handle overflow
            if(ans > INT_MAX){
                return sign == 1 ? INT_MAX : INT_MIN; 
            }
            i++;
        }

        return ans * sign;

    }
};