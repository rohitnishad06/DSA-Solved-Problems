#include<iostream>
using namespace std;

void swapalternate(int arr[], int n){
  for(int i=0; i<n; i+=2){
    if(i+1<n){
      swap(arr[i], arr[i+1]);
    }
  }
}

void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){

  int even[8] = {1,5,7,9,12,45,6,15};
  int odd[5] = {5,78,46,1,6};

  swapalternate(even, 8);
  swapalternate(odd, 5);

  printArray(even, 8);
  printArray(odd, 5);

  return 0;
}