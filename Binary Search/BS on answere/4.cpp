class Solution {
public:

    // check mini days
    bool possible(vector<int>& arr, int days, int m, int k){
        int count = 0;
        int noOfB = 0;
        for( int x : arr){
            if(x <= days){
                count++;
            }else{
                noOfB = noOfB + (count/k);
                count = 0;
            }
        }
        noOfB = noOfB + (count/k);
        return noOfB >= m;
    }


    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        long long val = m * 1LL * k * 1LL;   // LL -> take the number as long long

        if(val > n ){           // check the impossible case
            return -1;      
        }

        int maxi = INT_MIN, mini = INT_MAX;
        for(int x : arr){
            mini = min(mini, x);
            maxi = max(maxi, x);
        }

        int low = mini, high = maxi;
        while(low<=high){
            int mid = (low + high)/2;
            if(possible(arr, mid, m, k)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};