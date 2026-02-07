class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
          // num[i] -> store ascii value to convert into origanla value substract with 0 { 53 - 48 = 5 }   5 -> 53,   0 -> 48
            int digit = num[i] - '0'; 
            if(digit % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
