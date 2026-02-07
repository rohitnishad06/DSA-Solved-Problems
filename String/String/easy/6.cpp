class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(n != m){
            return false;
        }
        string temp = s + s;

        if(temp.find(goal) == string::npos){    // string::npos => not found or -1
            return false;
        }

        return true;
    }
};