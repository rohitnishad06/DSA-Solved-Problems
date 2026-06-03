class Solution {
public:

    bool isPalindrome(string s, int end, int start){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }

    void parti(int index, string s,  vector<string> &ds, vector<vector<string>>&ans){
        // base case
        if(index == s.length()){
            ans.push_back(ds);
            return;
        }
        for(int i  = index; i < s.length(); i++){
            if(isPalindrome(s, i, index)){
                ds.push_back(s.substr(index, i - index + 1));
                parti(i + 1, s, ds, ans);
                // backtrack
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        parti(0, s, ds, ans); // 0 -> index
        return ans;
    }
};