class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int el;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(count == 0){
                el = arr[i];
                count++;
            }else if(arr[i]==el){
                count ++;
            }else {
                count --;
            }
        }

        // this will only used when there is no majority element in the array 
        int count1 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == el){
                count1++;
            }
        }
        if(count1 > n/2){
            return el;
        }
        return -1;
    }
};


// tc -> O(n)
// sc -> O(1)