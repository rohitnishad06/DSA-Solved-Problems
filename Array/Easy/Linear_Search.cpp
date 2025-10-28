#include<iostream>
using namespace std;

bool findelement(int arr[], int n, int key){

  for(int i=0; i<n; i++){
    if(arr[i] == key){
      return 1;
    }
  }
  return 0;
}

int main(){

  int arr[6] = {1,2,6,8,12,18};

  cout<<"Enter the Element to be Found :"<<endl;
  
  int key;
  cin>>key;

  bool found = findelement(arr, 6, key);

  if(found){
    cout<<"Element is present"<<endl;
  }
  else{
    cout<<"Element is Absent"<<endl;
  }

  return 0;
}