class Solution {
public:

    bool canWePlace(vector<int> &arr, int dist, int cows){
        int placedCow = 1;
        int lastPlace = arr[0];
        int n = arr.size();
        for(int i = 1; i < n; i++){
            if(arr[i] - last >= dist){
                countCow++;
                last = arr[i];
            }
            if(countCow >= cows) return true;
        }
        return false;
    }

    // main funtion
    int aggressiveCows(vector<int> &arr, int cows) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int low = 1;                        // min
        int high = arr[n-1] - arr[0] ;     // max-min     
        int ans = 0;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(canWePlace(arr, mid, cows) == true){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};