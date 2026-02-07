class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> arr, int x) {
        int n = arr.size();
        int floorVal = -1, ceilVal = -1;

        // Find floor (largest element <= x)
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                floorVal = arr[mid];
                low = mid + 1;   // move right to find larger candidate
            } else {
                high = mid - 1;
            }
        }

        // Find ceil (smallest element >= x)
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ceilVal = arr[mid];
                high = mid - 1;  // move left to find smaller candidate
            } else {
                low = mid + 1;
            }
        }

        return {floorVal, ceilVal};
    }
};