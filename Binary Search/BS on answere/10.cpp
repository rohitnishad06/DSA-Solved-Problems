// same problem as book allocation problem 



class Solution {
public:
    // max element in array
    int maxElementInArray(vector<int> &arr, int n){
        int maxElement = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] > maxElement){
                maxElement = arr[i];
            }
        }
        return maxElement;
    }

    // sum of array
    int arraySum(vector<int> &arr, int n){
        int sum = 0;
        for(int num : arr){
            sum += num;
        }
        return sum;
    }

    // count required subarrays for given max allowed sum
    int countSubarrays(vector<int> &arr, int maxAllowedSum){
        int subarrayCount = 1;
        int currentSum = 0;

        for(int num : arr){
            if(currentSum + num <= maxAllowedSum){
                currentSum += num;
            } else {
                subarrayCount++;      
                currentSum = num;
            }
        }
        return subarrayCount;
    }

    int findMinimumLargestSum(vector<int> &arr, int n, int k){
        int low  = maxElementInArray(arr, n);
        int high = arraySum(arr, n);
        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int requiredParts = countSubarrays(arr, mid);

            if(requiredParts > k){
                low = mid + 1;
            } else {
                ans = mid;          
                high = mid - 1;
            }
        }
        return ans;
    }

    int splitArray(vector<int>& arr, int k) {
        return findMinimumLargestSum(arr, arr.size(), k);
    }
};
