#include<iostream>
using namespace std;

bool RemoveDuplicate(int arr[], int n){
  
  int i = 0;
  for(int j = 1; j<n; j++){
    if(arr[j]!=arr[i]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  
  return i+1;
}

void printarr(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}


int main(){

  int arr[7] = {1,1,2,2,2,3,3};

  RemoveDuplicate(arr, 7);

  printarr(arr, 3);


  return 0;
}