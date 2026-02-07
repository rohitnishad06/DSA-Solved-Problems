class Solution {
public:
    int lowerBound(vector<int>& arr, int n, int x) {
        int low = 0, high = n - 1, first = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                first = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }

    int upperBound(vector<int>& arr, int n, int x) {
        int low = 0, high = n - 1, last = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > x) {
                last = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& arr, int k) {
        int n = arr.size();
        int lb = lowerBound(arr, n, k);

        if (lb == n || arr[lb] != k)
            return {-1, -1};

        int ub = upperBound(arr, n, k) - 1;

        return {lb, ub};
    }
};
