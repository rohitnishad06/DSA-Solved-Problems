class Solution {
  public:   

  //  lowerBound 
  int lowerBound(vector<int> &arr, int m, int x){
    int low = 0;
    int high = m - 1;
    int ans = m;
    while(low <= high){
      int mid = (low + high)/2;
      if(arr[mid] >= x){      // may be an ans  
        ans = mid;
        high = mid -1;        // look for the left half
      }else{
        low = mid + 1;        // look for the right half
      }
    }
    return ans;
  }

  // main funtion
  int rowWithMax1s(vector < vector < int >> & mat) {
    int n = mat.size();     // row size
    int m = mat[0].size();  // col size
    int index = -1;
    int maxCount = 0;
    for(int i = 0; i<n; i++){
      int countRow = m - lowerBound(mat[i], m, 1);
      if(countRow > maxCount){
        maxCount = countRow;
        index = i;
      }
    }
    return index;
  }
};