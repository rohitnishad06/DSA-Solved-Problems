#include<iostream>
using namespace std;

void array(int arr[], int n){
  int largest = arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  cout<<"Largest Element : "<<largest<<endl;
}

int main(){

  int arr[5] = {3,2,1,5,2};
  array(arr, 5);

  return 0;
}
