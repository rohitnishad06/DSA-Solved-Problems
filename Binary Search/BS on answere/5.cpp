class Solution {
public:

    int sumofd(vector<int>& arr, int d){
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + ceil((double)(arr[i]) / (double)(d) );
        }
        return sum;
    }

    int maxnum(vector<int>& arr){
        int maxi = INT_MIN;
        for(int x : arr){
            maxi = max(maxi, x);
        }
        return maxi;
    }

    int smallestDivisor(vector<int>& arr, int limit) {
        int low = 1;
        int high = maxnum(arr);
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(sumofd(arr,mid) <= limit){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};