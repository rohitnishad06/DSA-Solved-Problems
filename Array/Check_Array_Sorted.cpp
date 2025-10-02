#include<iostream>
using namespace std;

bool ChackSortedArray(int arr[], int n){
  
  for(int i = 1; i<n; i++){
    if(arr[i]>=arr[i-1]){}
    else{
      return 0;
    }
  }
  
  return 1;
}


int main(){
  
  int arr[5] = {1,2,3,4,5};
  //int arr[5] = {1,2,3,6,5};

  bool sorted = ChackSortedArray(arr, 5);

  if(sorted){
    cout<<"Array is Sorted"<<endl;
  }
  else{
    cout<<"Array is not sorted"<<endl;
  }


  return 0;
}