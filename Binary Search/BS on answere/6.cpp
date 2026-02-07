class Solution {
public:

    // max element
    int MaxElement(vector<int>&arr){
        int n = arr.size();
        int max = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max  = arr[i];
            }
        }
        return max;
    }

    // sum of array
    int SumOfArr(vector<int>&arr){
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    
    // count days
    int countDays(vector<int>& arr, int cap){
        int load = 0;
        int days = 1;
        for(int i = 0; i<arr.size(); i++){
            if(load + arr[i] > cap){
                days = days + 1;
                load = arr[i];
            }else{
                load = load + arr[i];
            }
        }
        return days;
    }

    // main function
    int shipWithinDays(vector<int>& wt, int days) {
        int low = MaxElement(wt);
        int high = SumOfArr(wt);
        while(low<=high){
            int mid = (low + high)/2;
            int NoOfDays = countDays(wt, mid);
            if(NoOfDays<=days){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};