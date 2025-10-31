class Solution {
public:
    vector<int> rearrangeArray(vector<int>& num) {
     int n = num.size();
     vector<int>arr(n);
     int pos = 0, neg = 1;
     for(int i = 0; i< n; i++){
        if(num[i] > 0){
            arr[pos] = num[i];
            pos = pos + 2;
        }else{
            arr[neg] = num[i];
            neg = neg + 2;
        }
     }
     return arr;
    }
};

// tc -> O(n)
// sc -> O(n)