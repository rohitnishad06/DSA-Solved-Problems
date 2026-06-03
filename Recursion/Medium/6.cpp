class Solution {
public:

    void findSubset(int ind, vector<int>&arr,vector<vector<int>> &ans,vector<int>&ds){
        ans.push_back(ds);
        for(int i = ind; i<arr.size(); i++){
            if(i != ind && arr[i] == arr[i-1]) continue;    // skip duplicate
            ds.push_back(arr[i]);
            findSubset(i+1, arr, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(arr.begin(), arr.end());
        findSubset(0,arr, ans, ds);
        return ans;
    }
};