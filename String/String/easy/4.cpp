class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans = "";
       // first string len
       int n = strs[0].length(); 

       // length of array    
       int m = strs.size();

       // traversing all the char of first string
       for(int i = 0; i < n; i++){ 

        // char of first string  
        char ch = strs[0][i];

        bool match = true;

        // traversing all the string
        for(int j = 1; j < m; j++){

            // not match
            if( i > strs[j].length() || ch != strs[j][i] ){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        }else{
            ans.push_back(ch);
        }
       }
       return ans;
    }
};