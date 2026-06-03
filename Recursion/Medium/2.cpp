// print the subsequences of given sum

#include<bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
  // base case
  if(ind == n){
    if(s == sum){
      for(int i = 0; i<ds.size(); i++){
        cout<<ds[i]<<" ";
      }
      cout<<endl;
    }
    return;
  }
  // pick
  ds.push_back(arr[ind]);
  s += arr[ind]
  printS(ind+1, ds, s, sum, arr, n);
  
  // backtrack
  s -= arr[ind];
  ds.pop_back();

  // not pick
   printS(ind+1, ds, s, sum, arr, n);
}

int main(){

  int n = 3;
  int arr[n] = {1,2,1};
  int sum = 2;
  vector<int>ds;
  printS(0,ds,0,sum,arr,n);

  return 0;
}