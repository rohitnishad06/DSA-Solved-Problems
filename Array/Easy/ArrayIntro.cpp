#include<iostream>
using namespace std;

void printingArray(int arr[], int size){
  cout<<endl<<"printing the array :"<<endl;
  for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Printing Done"<<endl;
}

int main(){

  // declaration
  int arr[15];                            // contain garbage value for each index

  //accessing an array
  cout<<"Value at 14 index : "<<arr[14]<<endl;

  //Initializing an array 
  int Second[3] = {2,8,12};

  //accessing an element
  cout<<"value at 2 index : "<<Second[2]<<endl;

  int third[15]={2,7};                  // contain 0 for remaining index
  int n = 15;
  printingArray(third,15);

  // initializing all locations with 0
  int fouth[10]={0};                  
  n = 10;

  printingArray(fouth,10);

    // initializing all locations with 1 [this is not possible]
  int fifth[10]={1};                  
  n = 10;

  printingArray(fifth,10);

  // Size of array
  int sizeoffifth = sizeof(fifth)/sizeof(int);
  cout<<"Size of array:"<<sizeoffifth<<endl;


  cout<<endl<<endl<<"Code Running Properly"<<endl<<endl;

  return 0;
}