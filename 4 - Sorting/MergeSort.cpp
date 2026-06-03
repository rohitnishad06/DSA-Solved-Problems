#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
  vector<int>temp;
  int left = low;
  int right = mid+1;
  while(left <= mid && right <= high){
    if(arr[left] <= arr[right] ){
      temp.push_back(arr[left]);
      left++;
    }else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(arr[left]<=arr[mid]){
      temp.push_back(arr[left]);
      left++;
    }
    while(arr[right]<=arr[high]){
      temp.push_back(arr[right]);
      right++;
    }
    for(int i = low; i <= high; i++){
      arr[i] = temp[i-low];
    }
}


void MergeSort(int arr[], int low, int high){
  if(low >= high ) return;
  int mid = (low + high)/2;
  MergeSort(arr, low, mid);
  MergeSort(arr, mid+1, high);
  merge(arr, low, mid, high);
}

int printArr(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){

  int n = 5;
  int arr[] = {4,1,5,2,3};

  MergeSort(arr, 0, n-1);
  printArr(arr, n);

  return 0;
}

// TC -> O(n^2)