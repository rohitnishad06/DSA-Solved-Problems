// Given an array nums of n integers.
// Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

// Examples:
// Input: nums = [100, 4, 200, 1, 3, 2]
// Output: 4

// Explanation:
// The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) { // start of sequence
                int currentNum = num;
                int count = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};

// tc -> O(n)
// sc -> O(n) 