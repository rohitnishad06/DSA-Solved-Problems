#include<iostream>
#include <algorithm>
using namespace std;


//Brute Force           tc -> O(nlogn), sc -> O(1)

// int SecondLargest(int arr[], int n){
//   sort(arr, arr + n);
//   int largest = arr[n-1];
//   for(int i=n-2;i>=0;i--){
//     if(arr[i] != largest){
//       return arr[i];
//     }
//   }
//   return -1;
// }



// better Solution      tc -> O(2n), sc -> O(1)

// int SecondLargest(int arr[], int n){
//   int largest = arr[0];
//   for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//       largest = arr[i];
//     }
//   }
//   int SecondLarg = -1;
//   for(int i=0;i<n;i++){
//     if(arr[i]>SecondLarg && arr[i] != largest){
//       SecondLarg = arr[i];
//     }
//   }
//   return SecondLarg;
// }




//  optimal Solution        tc -> O(n), sc -> O(1)

int SecondLargest(int arr[], int n){
    int largest = arr[0];
    int Second = -1;
    for(int i=1;i<n;i++){
      if(arr[i]>largest){
        Second = largest;
        largest = arr[i];
      }
      else if(arr[i]<largest && arr[i]> Second){
        Second = arr[i];
      }
    }
    return Second;
}




int main(){
  int arr[6] = {12,35,1,10,34,1};

  cout<<"Second largest Element:"<<SecondLargest(arr, 6)<<endl;

  return 0;
}