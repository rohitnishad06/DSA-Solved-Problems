class Solution {
public:

    typedef pair<char, int> P;

    string frequencySort(string s) {
        vector<P> vec(123);
        //Count how many times each character appears in the string
        for(char ch : s){
            int freq = vec[ch].second;
             vec[ch] = {ch, freq + 1}; 
             // 1st time                        2nd time 
            // ch = 'e'                          ch = 'e' 
            // vec['e'].second = 0               vec['e'].second = 1
            // freq = 0                          freq = 1
            // vec['e'] = ('e', 1)               vec['e'] = ('e', 2) 

        };

        // sort by its frequency
        auto lambda = [&](P & p1, P & p2){
            return p1.second>p2.second;
        };

        //sort
        sort(vec.begin(), vec.end(), lambda);

        string result = "";

        for(int i = 0; i <= 122; i++){
            if(vec[i].second > 0){
                char ch = vec[i].first;
                int freq = vec[i].second;
                //Write this character freq times
                string temp = string(freq, ch);
                result += temp;
            }
        }
        return result;
    }
};