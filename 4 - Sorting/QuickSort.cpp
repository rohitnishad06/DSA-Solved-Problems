#include<iostream>
using namespace std;

int partition(int arr[], int st, int end){
  int idx = st-1, pivot = end;
  for(int j = st; j<end; j++){
    if(arr[j] < pivot ){
      idx++;
      swap(arr[j], arr[idx]);
    }
  }
  idx++;
  swap(arr[end], arr[idx]); 
  return idx;
}


void QuickSort(int arr[], int st, int end){

  if(st < end){
    int pividx = partition(arr, st, end);   // -> pivot

    QuickSort(arr, st, pividx-1);   // -> left
    QuickSort(arr,pividx+1, end);   /// -> right
  }
}

int main(){

  int n = 5;
  int arr[] = {4,1,5,2,3};

  QuickSort(arr,0,n-1);

  for(int val = 0; val<5;val++){
    cout<<arr[val]<<" ";
  }
  cout<<endl;

  return 0;
}

// TC -> O(n^2)