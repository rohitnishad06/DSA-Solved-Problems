class Solution {
public:

    void recurPermute(int ind,vector<int>& arr, vector<vector<int>>&ans,int n ){
        // base case
        if(ind == n ){
            ans.push_back(arr);
            return;
        }

        for(int i = ind; i<n; i++){
            swap(arr[ind], arr[i]);
            recurPermute(ind+1, arr,ans, n);
            swap(arr[ind], arr[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;
        recurPermute(0, arr, ans, n);
        return ans;
    }
};