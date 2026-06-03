// Print all the subequences 
// tc -> O(2^n * n)
// sc -> O(n)


#include<bits/stdc++.h>
using namespace std;

void printSub(int ind, vector<int> &arr, vector<int> &ans){
  int n = arr.size();
  if(ind >= n){
    for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
}
    cout<<endl;
    return;
  }
  // take or pick the particular index in the subsequence 
  ans.push_back(arr[ind]);
  printSub(ind + 1, arr, ans);

   // backtrack
  ans.pop_back();   
  // not pick or not take condition, this element is not added to your subSequence
  printSub(ind+1, arr, ans);

}

int main(){


  vector<int> arr;
arr.push_back(3);
arr.push_back(1);
arr.push_back(2);

  vector<int> ans;

  printSub(0,arr,ans);

  return 0;
}