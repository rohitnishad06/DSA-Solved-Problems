// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

// Input: nums = [1, 2, 5, 3, 1, 2]
// Output: [5, 3, 2]
// Explanation:
// 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]


class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
      int n = arr.size();
      // O(n) -> space
      vector<int>ans;
      int maxi = INT_MIN;
      // O(n) -> for itrating
      for(int i = n-1; i >= 0; i--){
        if(maxi<arr[i]){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
      }
      // O(nlogn) -> sorting / optional 
       reverse(ans.begin(), ans.end());
      return ans;
    }
};


// tc -> O(n)
// sc -> O(n)