#include<iostream>
using namespace std;

void Reverse(int arr[],int start, int end){
  while(start <=end ){
    int temp =arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}


void leftrotate(int arr[], int n, int d){
  d = d%n;
  Reverse(arr,0,d-1);
  Reverse(arr,d, n-1);
  Reverse(arr,0,n-1);
}


int main(){

  int arr[6] = {1,2,3,4,5,6};

  int d = 3;
  
  leftrotate(arr, 6, d);

  for(int i = 0; i<6; i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}