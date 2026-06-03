class Solution {
public:

    void findCombination(int ind, int target,vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr ){
        // base case
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        // pick condition
        for(int i = ind; i<arr.size(); i++){
            if(i>ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            findCombination(i+1, target-arr[i], ans, ds, arr );
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target, ans, ds, arr);
        return ans;
    }
};