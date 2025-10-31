class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int index = -1;

        // Step 1: Find the first element from right that is smaller than next
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such element, reverse and return (last permutation)
        if (index == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Step 3: Find element just greater than arr[index]
        for (int i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Step 4: Reverse the part after index
        reverse(arr.begin() + index + 1, arr.end());
    }
};