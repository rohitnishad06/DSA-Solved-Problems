class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int> mpp;            // initialize map
        int n = arr.size();
        for(int i = 0; i<n; i++){
            int num = arr[i];
            int needed = target - num;
            if(mpp.find(needed) != mpp.end()){      // find the element in the map
                return {mpp[needed], i};            // return the map element index, current element index
            }
            mpp[num] = i;                          // store current value , index for futher process
        }
        return {-1,-1};                            // if no element find then return
    }
};


// tc - O(n)
// sc - O(n)