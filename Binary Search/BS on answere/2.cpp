// Given two numbers N and M, find the Nth root of M. The Nth root of a number M is defined as a number X such that when X is raised to the power of N, it equals M. If the Nth root is not an integer, return -1.


// Examples:
// Input: N = 3, M = 27

// Output: 3

// Explanation: The cube root of 27 is equal to 3.

// Input: N = 4, M = 69

// Output:-1

// Explanation: The 4th root of 69 does not exist. So, the answer is -1.


class Solution {
public:

  // power function
  int pow(int mid, int n, int m){
    long long ans = 1;
    for(int i = 0; i<n; i++){
      ans = ans * mid;
      if(ans > m){
        return 2;
      }
    }
    if(ans == m){
      return 1;
    }
    return 0;
  }

  // main function
  int NthRoot(int n, int m) {
      int low = 1, high = m-1;
      while(low <= high ){
        int mid = (low + high)/2;
        if(pow(mid,n,m) == 1){
          return mid;
        }else if(pow(mid,n,m) == 0){
          low = mid + 1;
        }else{
          high = mid - 1;
        }
      }
      return -1; 
    }
};
