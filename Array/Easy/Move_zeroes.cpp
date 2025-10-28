#include<iostream>
using namespace std;

void movezeroes(int arr[], int n){
  int j = -1;
  for(int i = 0; i<n; i++){
    if(arr[i] == 0){
      j = i;
      break;
    }
}

for(int i = j+1; i<n; i++){
  if(arr[i] != 0){
    swap(arr[i],arr[j]);
    j++;
  }
}

}



int main(){

  int arr[5] = {0,1,0,3,12};

  movezeroes(arr, 5);

  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}