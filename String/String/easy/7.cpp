class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n != m){
            return false;
        }

        vector<int>freq(26, 0);  //  26 -> how many time ,  0 -> value
        for(char c : s){
            freq[c - 'a']++;    // increase the count
        }

        for(char c : t){
            freq[c - 'a']--;    // decrease the count
            if(freq[c - 'a'] < 0){          // check any value goes to -1
                return false;
            }
        }

        return true;

    }
};