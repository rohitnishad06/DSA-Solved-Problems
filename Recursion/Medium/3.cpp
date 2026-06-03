class Solution {
public:

    void findCombination(int ind, vector<int> &arr, vector<int> &ds, int target, vector<vector<int>> &ans){
        //base case
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return ;
        }

        // pick element
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            findCombination(ind, arr, ds, target-arr[ind], ans);
            ds.pop_back();
        }

        // not pick 
        findCombination(ind+1, arr, ds, target, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,arr,ds,target,ans);
        return ans;
    }
};