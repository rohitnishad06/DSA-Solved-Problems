class Solution {
public:
    int search(vector<int>& nums, int tar) {
       int st  = 0;
       int end = nums.size()-1;
       while(st <= end){
        int mid = st+end/2;
        if(tar < nums[mid]){
            end = mid - 1;              // 1st half
        }else if(tar > nums[mid]){
            st = mid + 1;               // 2st half
        }else{
            return mid;     // ans
        }
       }
       return -1;
    }
};