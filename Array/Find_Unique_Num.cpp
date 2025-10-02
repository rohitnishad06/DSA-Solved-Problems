// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.


#include<iostream>
using namespace std;

void uniquenum(int arr[], int n){
  int ans = 0;
  for(int i = 0; i<n; i++){
    ans = ans^arr[i];
  }
  cout<<ans<<endl;
}

int main(){

  int arr[5] = {2,3,5,3,2};

  uniquenum(arr, 5);

  return 0;

}