class Solution {
public:

    // finding max number 
    int findmax(vector<int>& arr){
        int maxi = 0;
        for(int x : arr){
            maxi = max(maxi, x);
        }
        return maxi;
    }

    // calculating hrs
    long long calculatehrs(vector<int>& arr, int hourly){
        long long totalhrs = 0;
        for(int x : arr){
            totalhrs += (x + hourly - 1) / hourly;   // SAFE CEIL DIV
        }
        return totalhrs;
    }

    // main function
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);

        while(low < high){
            int mid = low + (high - low) / 2;

            long long totalhrs = calculatehrs(piles, mid);

            if(totalhrs <= h)
                high = mid;     // possible answer
            else
                low = mid + 1;  // too slow
        }

        return low;
    }
};
