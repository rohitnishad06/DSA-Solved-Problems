class Solution {
public:
    string reverseWords(string s) {     // the pen
        int n  = s.length();
        string ans = "";        

        reverse(s.begin(), s.end());   //nep eht 

        for(int i = 0; i < n; i++ ){
            string word = "";
            while( i < n && s[i] != ' ' ){  
                word = word + s[i];            // nep, eht
                i++;
            }

            reverse(word.begin(), word.end());  // pen the
            if(word.length() > 0){
                ans = ans + " " + word;         // store -> _pen the
            }
        }
        return ans.substr(1);           // return -> pen the 
    }
};