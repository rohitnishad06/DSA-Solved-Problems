class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int price : arr){
            minPrice  = min(minPrice, price);
            int  profit = price - minPrice;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};

// tc -> O(n)
// sc -> O(1)