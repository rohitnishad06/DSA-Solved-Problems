class Solution {
  public:

    void fun(int ind, vector<int> &arr, int n, vector<int>&sumofsubsets, int sum){
      // base case
      if(ind == n){
        sumofsubsets.push_back(sum);
        return;
      }

      // pick 
      fun(ind+1, arr, n, sumofsubsets, sum+arr[ind]);

      // not pick
      fun(ind+1, arr, n, sumofsubsets, sum);
    }

    vector<int> subsetSums(vector<int>& arr) {
       vector<int>sumofsubsets;
       int sum = 0;
       int n = arr.size();
       fun(0,arr, n, sumofsubsets,sum);
       return sumofsubsets;
    }
};